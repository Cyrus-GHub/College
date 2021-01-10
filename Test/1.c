#include <stdio.h>

int fibonacci(int cy_n)
{
   if (cy_n <= 1)
      return cy_n;
   return fibonacci(cy_n - 1) + fibonacci(cy_n - 2);
}

int main()
{
   int di_roll = 203;
   int di_m = di_roll % 10 + 1;
   int di_n = di_roll % 10 + 10;
   while (di_m != di_n)
   {
      printf("%d\n", fibonacci(di_m));
      di_m++;
   }
   return 0;
}