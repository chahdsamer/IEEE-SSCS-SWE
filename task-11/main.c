#include<stdio.h>
int main(){
    for (int i=0;i<5;i++){
        for (char c='a';c<='z';c++){
            putchar(c);
        }
        putchar('\n');
    }
}