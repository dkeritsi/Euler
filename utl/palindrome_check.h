/*THIS UTL TESTS IF A NUMBER IS A PALINDROME UP TO 6 DIGITS



*/
int palindrome_check(int test_me, int length);

int palindrome_check(int test_me, int length){
	int counter=0;
	int i=0;
	int alpha=0;
	int beta=0;
	int gamma=0;
	int A[6] ={0,0,0,0,0,0};
	A[length]=0;
	for (i=0;i<length;i++){
		beta=test_me/pow(10,i+1);
		gamma=pow(10,i+1);
		alpha=pow(10,i);
		A[length-i-1]=(test_me-(beta*gamma))/alpha;
	}
/*
	printf("Testing ");
	for (i=0;i<length;i++){
		printf("%i",A[i]);
	}
	printf("\n");
*/
	for(counter=0;counter<length/2+1;counter++){
		if (A[counter]!=A[length-counter-1]) return 0;
	}
	return 1;

}
