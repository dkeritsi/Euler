#include <stdio.h>
#include "/net/cps235/export/home/dennis/projecteuler/utl/primacy.h"
	
int main (void)
{
	unsigned long long int i=0;
	unsigned long long int factor=600851475143;
	/*int factor=13195;*/
	/*factor=13195;*/

	printf("Factor is %lld\n",factor);
	for(i=factor-1;i>0 ;i--){	
		if(factor%i==0){
			if (primacy(i)){
				printf("THIS IS PRIME %lld\n",i);
				exit(0);
			}
		}
	}
	exit(0);
}
