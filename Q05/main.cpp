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

    void search(int target){
        if(head == nullptr){
            cout<<"Linkedlist is Empty";
            return;
        }
        Node *temp = head;
        while(temp!=nullptr){
            if(temp->data==target){
                cout<<"Found";
                return;
            }
            temp=temp->addr;
        }
        cout<<"Not Found";
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

    int target;
    cin>>target;
    l.search(target);
    return 0;
}