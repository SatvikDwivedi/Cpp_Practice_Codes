#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <conio.h>
struct node{
    int data;
    struct node* next;
};
struct node *head, *tail;
void insertlist(int n){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=n;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void printlist(){
    tail=head;
       while (tail!=NULL)
    {
        printf("%d->",tail->data);
        tail=tail->next;
    }
}
void searchlist(int x){
    int f=0;
    tail=head;
    while (tail!=NULL)
    {
         if(x==tail->data){
            printf("found");
            f++;}
        tail=tail->next;
        }
        if (f==0){
                printf("number not found");
            }
    }
int main(){
    insertlist(1);
    insertlist(2);
    insertlist(3);
    insertlist(5);
    insertlist(6);
    printlist();
    searchlist(2);
}