int primacy(unsigned long long int test);/*DONT TOUCH THIS*/
unsigned long long int square_root_int(unsigned long int root);


int primacy(unsigned long long int test){
	int j;
        for (j=2; j<=square_root_int(test);j++){
		if (test%j==0){
			return 0;	
		}
        }
	return 1;
}
unsigned long long int square_root_int(unsigned long int root){
        double root_me=(double)root;
        double tolerance=.0001;
        double X_old;
        double abs_value;
        double X=root_me;
        unsigned long long int return_me=0;
        do {
                X_old=X;
                X=.5*(X+(root_me/X));

                if(X_old>X){
                        abs_value=X_old-X;
                }
                else{
                        abs_value=X-X_old;
                        if(X_old==X) abs_value=0;
                }
        } while(tolerance<abs_value);
        return_me=(unsigned long long int)X;
        return return_me;
}
