#include <stdio.h>
int sum_layers(int n);
int main(){
    printf("%d\n",sum_layers(2));
    printf("%d\n",sum_layers(4));
    printf("%d\n",sum_layers(10));
}
int sum_layers(int n){
    int sum=0;
if(n>0){
return sum=n+sum_layers(n-1);
}
}
