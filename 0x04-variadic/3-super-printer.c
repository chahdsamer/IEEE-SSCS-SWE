#include<stdio.h>
#include <stdarg.h>
void super_printer(const char*flag,...){
    va_list ap;
    va_start(ap,flag);
    int i=0;
    if (flag=='\0') printf("null");
   else{while(flag[i]!='\0'){
        if (flag[i]=='f'){printf("%f",va_arg(ap,double));}
        else if (flag[i]=='i'){printf("%d",va_arg(ap,int));}
        else if (flag[i]=='c'){printf("%c",va_arg(ap,int));}
        else if (flag[i]=='s'){printf("%s",va_arg(ap,char*));}
        i++; }}printf("\n");
        va_end(ap);}
        int main(){
            super_printer("isc",3," hi ",'d');
            super_printer('\0');
            super_printer("iscd",3," hi ",'d');
        }