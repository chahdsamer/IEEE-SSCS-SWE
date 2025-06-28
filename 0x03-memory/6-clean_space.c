#include<stdio.h>
void*clear_allocation(int size);
int main(){
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    void *ptr=clear_allocation(size);
}
void*clear_allocation(int size){
    int* ptr=malloc(sizeof(int)*size);
    for(int i=0;i<size;i++){
      *(ptr+i)=0;}
      void *p=ptr;
    return p;
}
