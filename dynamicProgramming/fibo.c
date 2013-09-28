#include <stdio.h>

int fiboArr[100];

int fibo(n) {
   int i, tempval=1, retval = 1;

   if (fiboArr[n] != 0) {
	return fiboArr[n];
   }

   // unit case 
   if (n <= 1) {
      fiboArr[n] = retval;
      return retval;
   }

   // recursive case
   retval = fibo(n-1) + fibo(n-2);
   fiboArr[n] = retval;
   return retval;
}

int main() {
   int elements,i;
   printf ("please enter the number of elements required\n");
   scanf("%d",&elements);
   for(i=0; i<elements; i++) {
	   // initilizing the fiboArr to 0
	   fiboArr[i]=0;
   }
   for(i=0; i<elements; i++) {
	   printf("%d ,",fibo(i));
   }
   printf("\n");
}
