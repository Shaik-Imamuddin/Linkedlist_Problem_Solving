#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node *addr;

    Node(int val){
        data=val;
        addr = nullptr;
    }
};

class Linkedlist{
private:
    Node *head;
public:
    Linkedlist(){
        head = nullptr;
    }

    void insert(int val){
        Node *newNode = new Node(val);

        if(head==nullptr){
            head=newNode;
            return;
        }
        else{
            Node *temp = head;
            while(temp->addr!=nullptr)
                temp=temp->addr;
            temp->addr = newNode;
        }
    }

    int countNodes(){
        if(head == nullptr){
            cout<<"Linkedlist is Empty";
            return 0;
        }
        int count=0;
        Node *temp = head;
        while(temp!=nullptr){
            count++;
            temp=temp->addr;
        }
        return count;
    }
};

int main(){

    Linkedlist l;
    int val;

    do{
        cin>>val;
        if(val!=-1)
            l.insert(val);
    }while(val!=-1);

    cout<<l.countNodes();
    return 0;
}