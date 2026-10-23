#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *addr;
};

struct Node *head=NULL;

void insert(int val){
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->addr = NULL;

    if(head==NULL){
        head = newNode;
        return;
    }
    else{
        struct Node *temp = head;
        while(temp->addr!=NULL)
            temp=temp->addr;
        temp->addr = newNode;
    }
}

void search(int target){
    if(head==NULL){
        printf("Linkedliat is Empty");
        return;
    }

    struct Node *temp = head;

    while(temp!=NULL){
        if(temp->data==target){
            printf("Found");
            return;
        }
        temp=temp->addr;
    }
    printf("Not Found");
}

int main(){

    int val,target;

    do{
        scanf("%d",&val);
        if(val!=-1)
            insert(val);
    }while(val!=-1);

    scanf("%d",&target);
    search(target);
    return 0;
}