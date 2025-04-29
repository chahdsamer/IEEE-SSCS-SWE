#include<stdio.h>
void print_message(char*msg);
int main(){
    char*msg="hello";
    print_message(msg);
}
void print_message(char*msg){
    printf("%s",msg);
}