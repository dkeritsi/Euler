#include <stdio.h>
#include "/net/cps235/export/home/dennis/projecteuler/utl/divisors_fast.h"

int main(void){
	double number=0;
	double divisors=0;
	printf("Enter a number please\n");
	scanf("%lf",&number);
	printf("Number entered is %f\n",number);
	divisors=divisors_fast(number);
	printf("The number of divisors for %f is %f\n",number,divisors);
	exit(0);
}
	
