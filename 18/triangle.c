#include <stdio.h>
#include <stdlib.h>
#include <math.h>

FILE *fr


typedef struct{
	int value;
	int level;
	struct node *left;
	struct node *right;
	struct node *up;
}node;


int main(void){
	char line[80];
	long elapsed_seconds;

	node *head=NULL;
	node *start=NULL;
	node *conductor=NULL;
	int i=0;
	int j=0;
	fr = fopen("file.txt","rt");

	while(fgets(line, 80, fr) != NULL){
		sscanf (line, "%ld", &elapsed_seconds);
		printf ("%ld\n", elapsed_seconds);
	}
	fclose(fr);

	printf("%p\n",&start);
	printf("%p\n",start);

	start=malloc(sizeof(node));

	printf("%p\n",&start);
	printf("%p\n",start);

	conductor=start;
	head=start;

	start-> value=3;
	start-> level=0;

	printf("%i\n",start->value);
	printf("%i\n",start->level);
	printf("%i\n",head->value);
	printf("%i\n",head->level);
}
