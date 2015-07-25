#include <stdio.h>
#include <math.h>

double square_root(int root_me);

int main(void){
	int ten=100000;
	double rooted=0;
	rooted=square_root(ten);
	printf("The square root of ten thousand is %f\n",rooted);
	exit(0);
}
double square_root(int root_me){
	double tolerance=.0001;
	double X_old;
	double X=(double) root_me;
	double abs_value;
	do {
		X_old=X;
		X=.5*(X+(root_me/X));
		if(X_old>X) abs_value=X_old-X;
		if(X_old<X) abs_value=X-X_old;
		if(X_old==X) abs_value=0;
	} while(tolerance<abs_value);
	return X;
}
