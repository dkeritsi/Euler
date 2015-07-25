int number_length(int number_test);

int number_length(int number_test){
	int count=0;
	
	while(number_test>0){
		number_test=number_test/10;
		count++;
	}
	return count;
} 
