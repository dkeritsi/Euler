#include <stdio.h>
#include <stdlib.h>

void print_me(int *A,int N);
void alter_me(int *A,int N);

int main (void)
{
	int N=10;
	int i;
	int *A =malloc (sizeof (int) * N);
	for (i=0; i< N;i++){
		A[i] = 2*i; 
	}
	printf("\n");
	print_me(A,N);/*The array has been made and now printing;*/
	alter_me(A,N);/*Alter the array in the function;*/
	print_me(A,N);/*print array that has been altered in function*/
	exit(0);
}


void print_me(int *A,int N){
	int i;
	for (i=0; i< N;i++){
		printf("%i\n",A[i]);
	}
	printf("\n");
	
}


void alter_me(int *A,int N){
	int i;
	for (i=0; i< N;i++){
		A[i]=0;
	}
}
