#include <stdio.h>

void main (void)
{
   int i;
   int SUM=0;
   /*printf("hello,world\n");*/
   for ( i=1; i<1000; i=i+1)
   {
      if (i%3==0 || i%5==0){ 
      /*printf("%i\n", i);*/
      SUM=SUM+i;
      }


   }
   printf("%i\n",SUM);

   exit(0);
}
