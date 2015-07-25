#include "/net/cps235/export/home/dennis/projecteuler/utl/square_root.h"
int divisors(int evaluate);

int divisors(int evaluate){
	int i;
	double eval=(double) evaluate;
	int number_of_divisors=2;
	for(i=2;i<=square_root(evaluate);i++){ 
		if (evaluate%i==0){
			number_of_divisors=number_of_divisors+2;
		}
	}
	return number_of_divisors;
}
