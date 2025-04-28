#include <stdio.h>
int main(){
    for(char c='a';c<='z';c++){
        if (c=='q') continue;
        putchar(c);
    }
    for(char c='Z';c<='A';c--){
        if (c=='Q') continue;
        putchar(c);
    }
}