#include <stdio.h>
void advanced_pretty_printer(const char flag,const char* separator,const unsigned int n ,...){
    va_list ap;
    va_start(ap,n);
    if(flag=='s'){
        for(int i=0;i<n;i++){
            printf("%s",va_arg(ap,char*));
            printf("%s",separator);}
            printf("\n");}
    if(flag=='i'){
        for(int i=0;i<n;i++){
            printf("%d",va_arg(ap,int));
            printf("%s",separator);}
            printf("\n");}}
 int main (){
    advanced_pretty_printer('s'," * ",3,"hello","world","bye");
    advanced_pretty_printer ('i'," & ",5,10,20,30,40,50);
 }
