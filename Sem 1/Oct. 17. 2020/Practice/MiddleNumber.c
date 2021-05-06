/* Print the middle number among 3 numbers */
#include <stdio.h>
int main()
{
   int a,b,c,middle;

   printf("Enter 3 numbers: ");
   scanf("%d %d %d", &a, &b, &c);

   middle = b;

   if(a > b & c > b & a > c)
   middle = c;

   if(a > b & c > b & c > a)
   middle = a;

   if(a < b & c < b & a < c)
   middle = c;

   if(a < b & c < b & c < a)
   middle = a;

   printf("\n Middle number is : %d", middle);

   return 0;
}