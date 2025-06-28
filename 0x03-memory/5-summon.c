#include<stdio.h>
int *summon_allies(int*allies,int n);
int main(){
    int n;
    printf("enter number of elements");
    scanf("%d",&n);
int*allies=(int*)malloc(sizeof(int)*n);
int *ptr=summon_allies(allies,n);
}
int *summon_allies(int*allies,int n){
    if(allies==NULL) printf("allocation failed");
    for(int i=0;i<n;i++){
        printf("enter the element number");
        scanf("%d",(allies+i));
    }
    return allies;
}