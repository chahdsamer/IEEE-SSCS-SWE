#include<stdio.h>
#include<stdlib.h>
void*reshape(void*ptr,int old,int new);
int main (){int old ,new;
    printf("enter the size desired: ");
    scanf("%d",&old);
    void*ptr=malloc(sizeof(int)*old);
    printf("enter the updated size desired: ");
    scanf("%d",&new);
    ptr=reshape(ptr,old,new);
}
void*reshape(void*ptr,int old,int new){
    if(ptr==NULL) {void*p=malloc(sizeof(int)*new);}
    if (new==0) {free(ptr); return NULL;}
    else{void*p=malloc(sizeof(int)*new);int*l=(int*)ptr;int *o=(int*)p;
    for (int i=0;i<old;i++){
    *(o+i)=*(l+i);}
    free(ptr);
    p=(void*)o;
    return p;}
}