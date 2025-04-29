#include<stdio.h>
void echo(int n);
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    echo(n);
}
void echo(int n){
    if(n>0){
        printf("echo..\n");
        echo(n-1);
    }
}