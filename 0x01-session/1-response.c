#include<stdio.h>
int is_response_detected(int strength);
int main(){
    int strength;
    printf("enter strength");
    scanf("%d",&strength);
    if(is_response_detected(strength)==1){printf("signal detected");}
    else printf("signal not detected");
}
int is_response_detected(int strength){
    if (strength>50){return 1;}
    else return 0;
}