#include <stdio.h>
int main(){
    int n,i,j,result,c,remainder,f;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            result=i*j;
            c=result+48; 
            if (c>57){remainder=(result%10)+48;f=(result/10)+48;
            putchar(f);
            putchar(remainder);
            putchar (',');
            putchar(' ');
            continue;}
         if (c>156){remainder=(result%10)+48;f=((result/10)%10)+48;result=(result/100)+48;
        putchar(result);
        putchar(f);
        putchar(remainder);
        putchar(',');
        putchar(' ');
        continue;}   
            putchar (c);
            putchar(',');
            putchar(' ');
        }putchar('\n');
    }return 0;
}