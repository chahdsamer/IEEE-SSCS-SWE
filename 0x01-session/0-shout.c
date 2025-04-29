#include<stdio.h>
void repeat_message(int n);
int main(){
    int n;
printf ("enter n");
scanf("%d",&n);
repeat_message(n);}
void repeat_message(int n){
    for (int i=0;i<n;i++){
        printf("hello,world \n");
    }
}