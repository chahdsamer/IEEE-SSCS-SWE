#include<stdio.h>
char*get_reply();
int main(){
    printf("%s",get_reply());
}
char* get_reply(){
    char*str="hi";
    return str;
}
