#include<stdio.h>
#include <string.h>
int main ( int argc,char*argv[]){
    if (argc==1) printf("Silence,Nothing came through");
    if (argc>=2){
        for (int i=1;i<argc;i++){
            if (strcmp(argv[i],"revelation")==0) {printf("\na truth is revealed. you are not alone"); break;}
           else{ printf("\n command passed: %s",argv[i]);}
        }
    }
}
