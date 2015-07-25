#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int primacy(int test);

struct node{
	int prime;
	struct node *next;
};

int main(void){
	struct node *head=NULL;	
	struct node *conductor=NULL;	
	struct node *save=NULL;	
	/*
	struct node *head=NULL;	
	struct node *conductor=NULL;	
	struct node *save=NULL;	
	*/
	int prime_test;
	int i=1;
	int j;
	int SUM=2;
	head = malloc( sizeof(struct node) );
	head -> prime= 2;
	conductor=head;

	for(j=3;i<10001;j++){
		if(primacy(j)){
			conductor->next= malloc (sizeof(struct node));
			conductor=conductor->next;
			conductor->next=NULL;
			conductor-> prime=j;
			SUM=SUM+j;
			i++;
		}
	}
	printf("%i\n",i);
	printf("%i\n",conductor->prime);
	exit(0);
}

int primacy(int test){
        int j;
	/*
        for (conductor=head; next!=NULL;conductor->next){
		printf("%i\n",i);
		printf("%i\n",conductor->prime);
        }
	*/
        for (j=2; j<=sqrt(test);j++){
                if (test%j==0){
                        return 0;
                }
        }
        return 1;
}
