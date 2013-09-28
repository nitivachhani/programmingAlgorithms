#include <stdio.h>

int fibo(n) {
   int retval = 1;

   // unit case 
   if (n <= 1) {
      return retval;
   }

   // recursive case
   retval = fibo(n-1) + fibo(n-2);
   return retval;
}

int main() {
   int elements,i;
   printf ("please enter the number of elements required\n");
   scanf("%d",&elements);
   for(i=0; i<elements; i++) {
	   printf("%d ,",fibo(i));
   }
   printf("\n");
}
