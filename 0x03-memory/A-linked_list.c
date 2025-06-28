#include <stdio.h>
#include <string.h>
#include<stdlib.h>

struct node {int value;struct node *next};
struct node* createnode();
void addnode(struct node*);
void adddata(struct node *);
void printlist(struct node *);
int main (){
    struct node *a=createnode();
    addnode(a);
    adddata(a);
    printlist(a);
}
struct node* createnode(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node ));
    newnode->next =NULL;
    return newnode;
}
void addnode(struct node*a){
    a->next=(struct node*)malloc(sizeof(struct node));
    struct node*ptr=a->next;
    ptr->next=NULL;
}
void printlist(struct node*a){
struct node*ptr=a;
while(ptr!=NULL){
    printf("\n%d",ptr->value);
    ptr=ptr->next;
}}
void adddata(struct node *a){
    struct node*ptr=a;
    while(ptr!=NULL){
        printf("enter the node value");
        scanf("%d",&ptr->value);
        ptr=ptr->next;
    }
}
