#include <stdbool.h>
void print_me(int **A,int columns,int rows);
int prime_up_to(int up_to);

int prime_up_to(int up_to){
/*Lists prime numbers up to a value*/
	int i=0;
	int j=0;
	int columns=2;
	int rows=up_to;
        int **A =(int **)malloc (sizeof (int *) * columns);
	for(i=0; i<columns;i++){
                A[i]=(int *)malloc (sizeof (int ) * rows);
        }
        for (i=0; i< columns;i++){
                for (j=0; j< rows;j++){
			if (i==0){	
                		A[i][j] = 0;
			}
			else{
                		A[i][j] = j+1;
			}
                }
        }
	A[0][0]=1;	
        /*print_me(A,columns,rows);*/
	for (j=2; j< rows;j++){
		for (i=2; i< rows;i++){
			if ((i>j) && (i%j)==0){
				A[0][i-1]=1;	
			}
		}
	}
        /*print_me(A,columns,rows);*/
	for (j=1; j< rows;j++){
		if (A[0][j-1]==0) printf("%i\n",j);
	}
	return 1;
}
void print_me(int **A,int columns,int rows){
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
