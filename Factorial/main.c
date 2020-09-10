#include <stdio.h>

unsigned long int factorial(unsigned long int i) {

   if(i <= 1) {
      return 1;
   }
   return i * factorial(i - 1);
}

int  main() {
   int i = 3;
   printf("Factorial of %d is %li\n", i, factorial(i));
   return 0;
}
