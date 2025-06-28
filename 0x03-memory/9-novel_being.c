#include <stdio.h>
struct being{char* name; int age; float energy_level;};
print_being (struct being *b);
int main(){
    struct being a ={"alex",8,7.9};
    print_being(&a);
}
print_being (struct being *b){
    printf("name: %s , age: {%d}, energy {%f}",b->name,b->age,b->energy_level);
}