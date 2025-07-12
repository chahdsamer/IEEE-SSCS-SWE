#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n ,...){
    va_list ap;
    int sum=0;
    va_start(ap,n);
    for(int i=0;i<n;i++){
        sum+=va_arg(ap,int);}

    va_end(ap);
    return sum;
}
int main (){
printf ("sum is %d",sum_them_all(3,1,2,3));
printf("sum is %d",sum_them_all(4,10,20,30,40));
}

