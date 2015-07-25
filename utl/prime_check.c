#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
void print_me(int **A, int columns, int rows);

int main (void)
{
/*Lists prime numbers up to a value*/
/*ENTER VALUE UP TO HERE!!!!!!!!!!*/
	int up_to=10000;
	int i=0;
	int j=0;
	int columns=2;
	int rows=0;
	int SUM=0;
        int **A =( int **)malloc (sizeof ( int *) * columns);
	rows=up_to;
	for(i=0; i<columns;i++){
                A[i]=( int *)malloc (sizeof ( int ) * rows);
        }
	
        for (i=0; i< columns;i++){
                for (j=0; j< rows;j++){
			if (i==0){	
                		A[i][j] = 0;
			}
			else{
                		A[i][j] = j+1;
				/*printf("%i\n",A[i][j]);*/
			}
                }
        }
	A[0][0]=1;	
        /*print_me(A,columns,rows);*/
	for (j=2; j<= (int)sqrt((double)rows);j++){
		for (i=2; i< rows;i++){
			if ((i>j) && (i%j)==0){
				A[0][i-1]=1;	
			}
		}
	}
        /*print_me(A,columns,rows);*/
	for (j=2; j< rows;j++){
		if (A[0][j-1]==0){ 
			/*printf("%i\n",j);*/
			SUM=SUM+j;
		}
	}
	printf("SUM IS: %i\n",SUM);
	exit(0);
}
void print_me( int **A, int columns, int rows){
	int i,j;
        for (j=0; j< rows;j++){
                printf("(");
                for (i=0; i< columns;i++){
       			printf("%i",A[i][j]);
			if (i==0) printf(",");
                }
                printf(") ");
		if (j%9==0 && j!=0) printf("\n");
        }
                printf("\n");
}
