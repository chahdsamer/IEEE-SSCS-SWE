#include<stdio.h>
#include<stdarg.h>
void pretty_printer(const char*seperator,const unsigned int n ,...){
    va_list ap;
    va_start(ap,n);
    for(int i=0;i<n;i++){
        printf("%d",va_arg(ap,int));
        printf("%s",seperator);
    }
    va_end(ap);
}
int main(){
    pretty_printer(" # ",3,1,2,3);
    pretty_printer ("!",5,1,2,3,4,5);
}