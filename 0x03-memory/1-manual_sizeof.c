#include<stdio.h>
int manual_sizeof();
int main(){
   printf("%d", manual_sizeof());
}
int manual_sizeof(){
    int n=0;
    int*ptr1=&n;
    int a = (char*)(ptr1+1)-(char*) ptr1;
    return a;
}
