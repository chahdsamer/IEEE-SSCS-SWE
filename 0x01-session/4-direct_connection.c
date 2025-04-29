#include<stdio.h>
int main(){
    int signal=98;
    int* ptr=&signal;
    printf("signal=%d,adress=%d",*ptr,ptr);
}
