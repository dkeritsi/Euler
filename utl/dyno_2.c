#include <stdio.h>
#include <stdlib.h>

void print_me(int **A,int columns,int rows);
void alter_me(int **A,int columns,int rows);

int main (void)
{
	int rows=10;
	int columns=10;
	int i;
	int j;
	int **A =(int **)malloc (sizeof (int *) * columns);
	for(i=0; i<columns;i++){
		A[i]=(int *)malloc (sizeof (int ) * rows);
	}
	for (i=0; i< columns;i++){
		for (j=0; j< rows;j++){
		A[i][j] = j*i; 
		}
	}
	print_me(A,columns,rows);
	printf("\n");
	alter_me(A,columns,rows);
	print_me(A,columns,rows);
	exit(0);
}

void print_me(int **A,int columns,int rows){
	int i,j;
	for (i=0; i< columns;i++){
		for (j=0; j< rows;j++){
		printf("%i ",A[i][j]);
		}
		printf("\n");
	}
}

void alter_me(int **A,int columns,int rows){
	int i,j;
	for (i=0; i< columns;i++){
		for (j=0; j< rows;j++){
			A[i][j]=j*i*2;
		}
	}
}
