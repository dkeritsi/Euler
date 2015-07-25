#include <stdio.h>
#include <stdlib.h>

void print_number(int *A,int pow,int size);
int main(void){
	/*int *A = malloc(sizeof (int) * 5);*/
	int size=310;
	int A[size];
	int i;
	int pow;
	int carry=0;
	int SUM=0;
	int to_the_power=1000;

	for (i=0;i<size;i++){
		A[i]=0;	
		/*printf("A[%i] is %i\n",i,A[i]); */
	}
	A[size-1]=2;
	for (pow=2;pow<to_the_power+1;pow++){
		for (i=size-1;i>-1;i--){
			A[i]=A[i]*2+carry;
			carry=0;
			/*print_number(A);*/
			if (A[i]>9){ 
				A[i]=A[i]-(A[i]/10)*10;
				carry=1;
			}
		}
	}
	/*print_number(A,pow-1,size);	*/
	for (i=0;i<size;i++){
		SUM=SUM+A[i];	
	}
	printf("SUM is %i\n",SUM);
}
void print_number(int *A,int pow,int size){
	int i;
	printf("2 to the power of %i is: ",pow);
	for (i=0;i<size;i++){
		printf("%i",A[i]); 
	}
	printf("\n");
}
