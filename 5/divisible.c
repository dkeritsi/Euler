#include <stdbool.h>

int main(void)
{
	int dividend=10;
	int divisor=2;
	for(dividend=10;;dividend++)
	{
		for (divisor=2;divisor<21;divisor++)
		{
			if(dividend%divisor!=0){
				break;
			}
			if(divisor==20){
				printf("%i\n",dividend); 
				exit(0);
			}
		}
	}
	exit(0);
}
