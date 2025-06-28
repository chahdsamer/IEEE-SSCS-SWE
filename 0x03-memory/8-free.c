#include <stdio.h>
#include<stdlib.h>
void free_array(int**arr);
int main (){
    int *arr=(int*)malloc(sizeof(int)*3);
    free_array(&arr);
}
void free_array(int **arr){
    if((arr!=NULL)&&(*arr!=NULL)){
        free(*arr);
        *arr=NULL;
    }
}