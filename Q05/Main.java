import java.util.Scanner;

class Node{
    int data;
    Node addr;

    Node(int val){
        data = val;
        addr = null;
    }
}

class Linkedlist{
    Node head;

    Linkedlist(){
        head = null;
    }

    void insert(int val){
        Node newNode = new Node(val);

        if(head==null){
            head = newNode;
            return;
        }
        else{
            Node temp = head;
            while(temp.addr!=null){
                temp = temp.addr;
            }
            temp.addr = newNode;
        }
    }

    void search(int target){
        if(head==null){
            System.out.println("Linkedlist is Empty");
            return;
        }

        Node temp = head;
        while(temp!=null){
            if(temp.data==target){
                System.out.println("Found");
                return;
            }
            temp = temp.addr;
        }
        System.out.println("Not Found");
    }

}


public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Linkedlist l = new Linkedlist();

        int val;
        do{
            val = sc.nextInt();
            if(val!=-1)
                l.insert(val);
        }while(val!=-1);

        int target = sc.nextInt();
        l.search(target);
    }   
}