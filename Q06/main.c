#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *addr;
};

struct Node *head = NULL;

void insert(int val){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->addr = NULL;

    if(head==NULL)
        head=newNode;
    else{
        struct Node *temp = head;
        while(temp->addr!=NULL)
            temp = temp->addr;
        temp->addr = newNode;
    }
}

void reverse(){
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while(current!=NULL){
        next = current->addr;
        current->addr = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

void display(){
    if(head==NULL){
        printf("Linkedlist is Empty");
        return;
    }
    struct Node *temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->addr;
    }
    printf("\n");
}

int main(){

    int val;
    do{
        scanf("%d",&val);
        if(val!=-1)
            insert(val);
    }while(val!=-1);
    display();
    reverse();
    display();
    return 0;
}