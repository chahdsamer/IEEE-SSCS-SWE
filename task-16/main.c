#include <stdio.h>
int main(){
    int i,j,result,c,remainder,f;
    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
            result=i*j;
            c=result+48; 
            if (c>57){remainder=(result%10)+48;f=(result/10)+48;
            putchar(f);
        putchar(remainder);
    putchar (',');
putchar(' ');
continue;}
            putchar (c);
            putchar(',');
            putchar(' ');
        }putchar('\n');
    }return 0;
}