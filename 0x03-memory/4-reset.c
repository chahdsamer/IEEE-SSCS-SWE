#include <stdio.h>
int main(){
    acess_one();
    acess_two();
    acess_one();
    acess_two();
    acess_one();
    acess_two();
    acess_one();
    acess_two();
    printf ("number of times function is acessed %d ",acess_one()-1);
    printf ("\nnumber of times function is acessed %d ",acess_two()-1);
    printf("\nnumber of times both functions are acessed %d",acess_both()-3);
}
acess_one(){
    static int counter1;
counter1++;
acess_both();
return counter1;
}
acess_two(){
       static int counter2;
counter2++;
acess_both();
return counter2;
}
acess_both(){ static int counter3;
counter3++;
return counter3;
}