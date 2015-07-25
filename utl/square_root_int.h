int square_root_int(int root);

int square_root_int(int root){
	double root_me=(double)root;
	double tolerance=.0001;
	double X_old;
	double abs_value;
	double X=root_me;
	int return_me=0;
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
	return_me=(int)X;
	return return_me;
}

