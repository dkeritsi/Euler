#include <stdio.h>

int main(void){
	int dec=357;
	int bin=0;
	int count=0;
	for (dec=357;count<9;dec=dec/2,count++){
		bin=bin*10+dec%2;
		printf("%i\n",bin);
	}
}
