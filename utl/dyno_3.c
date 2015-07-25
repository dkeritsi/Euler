#include <stdio.h>
#include <stdlib.h>


int main(void){
	int N=8;
	int i;
	int *A = malloc(sizeof(int) * N);
	if (A!=NULL) {
		printf("Allocation successful\n");
	}
	else {
		printf("Allocation failed\n");
	}
	

	for (i=0;i<N;i++){
		A[i]=i;
	}

	for (i=0;i<N;i++){
		printf("%i\n",A[i]);
	}
	/*
	for (i=0;i<N;i++){
		free(A[i]);
	}
	*/
	free(A);

	for (i=0;i<N;i++){
		printf("%i\n",A[i]);
	}

}
