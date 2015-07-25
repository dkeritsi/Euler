#include <stdio.h>
#include <math.h>
#include "/net/cps235/export/home/dennis/projecteuler/utl/divisors.h"

int main(void){
	int n=1;
	int number_of_divisors;
	int triangle_n=0;
	for(number_of_divisors=0;number_of_divisors<500;n++){
		triangle_n=triangle_n+n;
	/*	printf("triangle %i is %i \n",n,triangle_n);*/
		number_of_divisors=divisors(triangle_n);
	}
		printf("The number of divisors of number %i is %i\n",triangle_n,number_of_divisors);
}
/* Regression sucks and is hella slow
int triangle(int n){
	if (n==1) return 1;
	else return triangle(n-1)+n;
}
*/
