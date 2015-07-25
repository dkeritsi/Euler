#include <stdbool.h>
#include <math.h>
#include "/net/cps235/export/home/dennis/projecteuler/utl/number_length.h" 
#include "/net/cps235/export/home/dennis/projecteuler/utl/palindrome_check.h" 

int main (void)
{
	int product=0;
	int product_max=0;
	int i=0;
	int j=0;
	int pally=0;
	int length=0;

	for (i=900;i<1000;i++){
		for (j=800;j<1000;j++){
			product=i*j;/*10 000 is mini 998 001 is max printf("%i\n",product);*/
			length=number_length(product);
			pally=0;
			pally=palindrome_check(product,length);
	 		if ((pally && product_max<product)) product_max=product; 
		}
	}
	printf("%i\n",product_max);
	exit(0);

}
