#include <stdio.h>
#include <stdlib.h>

int main(void){
	int primacy=0;
	int columns=2;
	int i,j=0;
	int rows=19;
	int **A =(int **)malloc (sizeof (int *) * columns);
        for(i=0; i<columns;i++){
                A[i]=(int *)malloc (sizeof (int ) * rows);
        }

	scanf("%i",&rows);
        for (j=2; j<rows;j++){
                if (rows%j==0){
			printf("\n%i\n",primacy);
			exit(0);
                }
        }
	primacy=1;
	printf("\n%i\n",primacy);
	exit(0);

}
