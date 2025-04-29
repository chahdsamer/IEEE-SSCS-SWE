#include<stdio.h>
void swap(int *a,int*b);
int main(){
    int a=6;
    int b =5;
    printf("before swapping a=%d , b=%d\n",a,b);
    swap(&a,&b);
    printf("after swapping a=%d , b=%d\n",a,b);
}void swap(int*a,int*b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}