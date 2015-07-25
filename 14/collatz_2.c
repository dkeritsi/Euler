#include <stdio.h>
int main(void){
	int count=0;
	int longest=0;
	int longest_n=0;
	int million=1000000;
	int n=0;
	million=14;
	million=million-1;

	for (longest=0;million!=1;million--){
		printf("Evaluation of: %i\n",million);

		n=million;
		for (count=1;n!=1;count++){
			if(n%2!=0) {
				 n=3*n+1;
			}
			else {
			 	n=n/2;
			}
		printf("	term is %i\n",n);
		}
		printf("count is %i\n",count);
		if(count>longest){ 
			longest=count;
			longest_n=million;
		}
	}
	printf("%i has %i terms\n",longest_n,longest);
}

