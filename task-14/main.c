#include <stdio.h>
int main(){
    int i,j;
    for(i=48;i<=57;i++){
        for(j=49;j<=57;j++){
            if((i==j)||(i>j)){continue;}
            putchar(i);
            putchar(j);
            putchar(',');
        }
    }
}