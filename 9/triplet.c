#include <stdio.h>




int main(void)
{
	int a;	
	int b;	
	int c;	
	for(a=1;a<1000;a++){
		for(b=1;b<1000;b++){
			for(c=1;c<1000;c++){
				if( (c*c==b*b+a*a) & (a+b+c==1000) ){
					printf("%i\n",a);
					printf("%i\n",b);
					printf("%i\n",c);
					exit(0);
				}
			}
		}
	}

}
