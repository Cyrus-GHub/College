/* Check if it's a triangle */
#include <stdio.h>
int main()
{
   float a, b, c, t;
   
   printf("Enter sides of triangle (A B C): ");
   scanf("%f %f %f", &a, &b, &c);
   
   t = ((a + b) > c) && ((b + c) > a) && ((c + a) > b);
    
   printf("Is this a triangle? 1 for YES, 0 for NO: %d",t);
   
   t = ((a + b) > c) + ((b + c) > a) + ((c + a) > b)/3;

   printf("\n Is this a triangle? 1 for YES, 0 for NO: %d",t);

   return 0; 
 }
 