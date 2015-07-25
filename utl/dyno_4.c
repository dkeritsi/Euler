#include <stdio.h>
#include <stdlib.h>

struct node{
	int prime;
	struct node *next;
};

int main(void){
	struct node *list =NULL;
	struct node *curr=NULL;
	int size =0;
	int i;

	for (i=0;i<10;i++){
		list = malloc(sizeof *list);
		if (list==NULL)
			break;
		list->next=NULL;
	}
}
