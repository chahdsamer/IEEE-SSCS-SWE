#include <stdio.h>
int is_strong_signal(int strength);
void check_signal(int strength);
int main(){
    int strength;
    printf("enter the strength");
    scanf("%d",&strength);
    check_signal(strength);
}
void check_signal(int strength){
    if (is_strong_signal(strength)==1){printf("strong signal detected");}
    else {printf("no signal detected");}
}
int is_strong_signal(int strength){
    if (strength>50){return 1;}
    else return 0;
}