#include <stdbool.h>


int main(void)
{
	int i=1;
	int SUM_one=0;
	int SUM_two=0;
	int answer=0;




	for(i=1;i<101;i++){
		SUM_one=SUM_one+i*i;	
		SUM_two=SUM_two+i;	
	}
	answer=SUM_two*SUM_two-SUM_one;
	printf("%i\n",answer);
	exit(0);
}
