#include <stdio.h>
int signal_strength=0;
void boost_signal(int n);
int main(){
    printf("strength before calling= %d\n",signal_strength);
    boost_signal(signal_strength);
    printf("strength after calling =%d",signal_strength);
}
void boost_signal(int n){
    int signal_strength=100;
    printf("booster:signal strength =%d\n",n);
}