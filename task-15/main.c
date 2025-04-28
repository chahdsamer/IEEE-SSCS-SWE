#include <stdio.h>
int main(){
    int i,j,k;
    for (i=48;i<=57;i++){
        for (j=49;j<=57;j++){
            for (k=50;k<=57;k++){
                if ((i==j)||(j==k)||(i==k)) continue;
                if ((i<j)&&(j<k)) {putchar(i);
                    putchar(j);
                    putchar(k);
                    putchar(',');
                    putchar(' ');

            }
        }
    }
}}