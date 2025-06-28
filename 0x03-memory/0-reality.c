#include <stdio.h>
void status (int n);
int main (){
    int n;
    void (* ptr )(int n );
    ptr=&status;
    printf("enter a number n");
    scanf("%d",&n);
    ptr(n);
}
void status (int n){
    if (n>0) printf("positif");
    if (n<0) printf("negatif");
    else if (n==0) printf("zero");
}