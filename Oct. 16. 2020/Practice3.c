/* Check if a triangle is right-angled */
#include<stdio.h>
int main()
{
   float a,b,c,t;

   printf("Enter sides of the triangle (A B C): ");
   scanf("%f %f %f", &a, &b, &c);

   t= ( ( (a*a) == (b*b) + (c*c) ) || ( (a*a) == (b*b) + (c*c) ) || ( (a*a) == (b*b) + (c*c) ) );

   printf("\n If the triangle is right-angled then the output will be 1, otherwise 0");
   printf("%f", t);

   return 0;
}