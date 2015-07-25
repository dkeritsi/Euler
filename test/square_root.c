#include <stdio.h>
#include <math.h>
#include "/net/cps235/export/home/dennis/projecteuler/utl/square_root.h"

int main(void){
	double number=0;
	double root=0;
	printf("Enter a number please\n");
	scanf("%lf",&number);
	printf("Number entered is %f\n",number);
	root=square_root(number);
	printf("The square root of %f is %f\n",number,root);
	exit(0);
}
	
