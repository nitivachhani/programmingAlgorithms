#include <stdio.h>

int fibo(n) {
   int i, tempval=1, retval = 1;

   // unit case 
   if (n <= 1) {
      return retval;
   }

   for (i=2; i<=n; i++){
	retval += tempval;
	tempval = retval;
   }
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
