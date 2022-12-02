#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct node{
    int data;
    struct node* next;
};
struct node *head, *ptr;
void insertnode(int n){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        ptr=newnode;
    }
    else{
        ptr->next=newnode;
        ptr=newnode;
    }
    
}
void middleelement(){
    struct node *first,*second;
    first=second=head;
    if (head!=NULL){
        while (second!=NULL && second->next!=NULL)
        {
            second=second->next->next;
            first=first->next;
        }
        printf("middle element is %d",first->data);
    }
}
void insertafternode(){
    struct node *newnode,*ptr,*preptr;
    int num,val;
    printf("the num after which node is inserted : ");
    scanf("%d",&num);
    printf("val to be inserted : ");
    scanf("%d",&val);
    newnode=(struct node*)malloc(sizeof(struct node*));
    newnode->data=val;
    ptr=head;
    preptr=ptr;
    while (preptr->data!=num)
    {
         preptr=ptr;
         ptr=ptr->next;
    }
    preptr->next=newnode;
    newnode->next=ptr;
}
void display(){
    ptr=head;
    while(ptr->next!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    head = NULL;
    insertnode(2);
    insertnode(4);
    insertnode(6);
    insertnode(8);
    insertnode(10);
    insertnode(12);
    insertafternode();
    display();
}