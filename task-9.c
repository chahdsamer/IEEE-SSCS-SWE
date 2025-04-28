#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*output should be: number n last digit is (even | odd),
	the last digit is num, and it is (more | less) than 5*/
    int last;
    last=abs(n%10);
    if (last %2==0){
        printf("%d is even",last);
    }else printf("%d is odd",last);
    if(last>5){
        printf("and more than 5");
    }
    else if (last<5){
        printf("and less than 5");
    }
	return (0);
}