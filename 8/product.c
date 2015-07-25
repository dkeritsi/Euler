#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	FILE *fr
	int i;
	long elapsed_seconds;
	char line[50];
	clrscr();

	fr =fopen("1000.txt","rt");


	while(fgets(line,50,fr) != NULL){
		sscanf(line,"%i",&elapsed_seconds);
		printf("%i\n",elapsed_seconds);
	}
	fclose(fr);

	printf("\n");

}
