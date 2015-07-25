#include <stdio.h>

void main (void)
{
   int i;
   int fib_n=1; 
   int fib_n_m1=1;
   int SUM=0;
   for (i=1;fib_n<4000000 ; i++) 
   {
      fib_n=fib_n+fib_n_m1;
      fib_n_m1=fib_n-fib_n_m1;

      if (fib_n%2==0){
      printf("%i:",i);
      printf(" %i\n",fib_n);
      SUM=SUM+fib_n;
      }
      if (i==100) break;
   }
   printf("%i\n",SUM);

   exit(0);
}
