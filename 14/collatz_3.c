#include <stdio.h>
#include <stdlib.h>
int main(void){
	int count=0;
	int longest=0;
	int longest_n=0;
	int million=1000000;
	int i=0;
	long long int n=0;
	int *A = malloc(sizeof (int) * million);

	for (i=1;i<=million;i++){
		A[i] =1;
	}

	for (longest=0;million!=1;million--){
		if (A[million]==1){
			n=(long long int)million;
			for (count=1;n!=1;count++){
				if(n%2!=0) {
			 		n=3*n+1;
				}
				else {
			 		n=n/2;
				}
				if(n<=(long long int)million) A[n]=0;
			}
			if(count>longest){ 
				longest=count;
				longest_n=million;
			}	
		}
	}
	printf("%i has %i terms\n",longest_n,longest);
}

