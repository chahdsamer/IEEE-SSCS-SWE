#include<stdio.h>
int a =5;
int main (){
    int x=0;
    int b=malloc(sizeof(int));
    b=9;
    char*str="abc";
    printf("%p :data segment-> %d",&a,a);
    printf("\n%p :stack-> %d",&x,x);
    printf("\n%p :heap-> %d",&b,b);
    printf("\n%p :stack-> %s",&str,str);
}
