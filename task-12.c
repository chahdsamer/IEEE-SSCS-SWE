#include <stdio.h>
int main(){
    char c;
    printf("enter a letter");
    scanf("%c",&c);
    if ((c>='a')&&(c<='z')){
        printf("lower");
    }
    if ((c>='A')&&(c<='Z')){
        printf("upper");
    }
    return 0;
}