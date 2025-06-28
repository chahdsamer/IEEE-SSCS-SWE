#include<stdio.h>
int echo_data(void*data);
int main(){
    int n;
    printf("enter your data");
    scanf("%d",&n);
    void*ptr=&n;
    printf("%d",echo_data(ptr));
}
int echo_data(void* data){
    return *(int*)data;
}
