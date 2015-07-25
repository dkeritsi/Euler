#include <stdio.h>
int Collatz_terms(int Collatz);

int main(void){
	int count=0;
	int longest=0;
	int longest_n=0;
	int million=1000000;
	million=10000;
	/*million=million-1;*/

	for (longest=0;million!=1;million--){
		/*printf("Evaluation of: %i\n",million);*/
		count=Collatz_terms(million);
		/*printf("count is %i\n",count);*/
		if(count>longest){ 
			longest=count;
			longest_n=million;
		}
	}
	printf("%i has %i terms\n",longest_n,longest);
}


int Collatz_terms(int n){
	int count=1;
	for (;n!=1;count++){
		if(n%2!=0) {
			 n=3*n+1;
		}
		else {
			 n=n/2;
		}
	}
	return count;
}
