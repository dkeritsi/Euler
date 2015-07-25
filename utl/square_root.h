double square_root(double root_me);

double square_root(double root_me){
	double tolerance=.0001;
	double X_old;
	double X=root_me;
	double abs_value;
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
	return X;
}

