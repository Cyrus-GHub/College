/* Slope of a line */
#include <stdio.h>
void main()
{
   float x1,y1,x2,y2,m;
   printf("Enter the coordinate of first point (x1,y1): ");
   scanf("%f,%f", &x1, &y1);
   printf("\n Enter the coordinate of second point (x2,y2): ");
   scanf("%f,%f", &x2, &y2);

   m = (y2-y1)/(x2-x1);

   printf("\n The slope of the line is %f: ",m);
}