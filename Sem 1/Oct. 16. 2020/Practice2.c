/* Check if 2 lines are parallel */
#include <stdio.h>
int main()
{
   float x1,x2,x3,x4,y1,y2,y3,y4,m1,m2,t;
   

   printf("Co-ordinate of first point of Line 1 (use space instead of commas): ") ;
   scanf("%f %f", &x1, &y1);
   
   printf("Co-ordinate of second point of Line 1 (use space instead of commas): ") ;
   scanf("%f %f", &x2, &y2);
   
   printf("Co-ordinate of first point of Line 2 (use space instead of commas): ") ;
   scanf("%f %f", &x3, &y3);
   
   printf("Co-ordinate of secomd point of Line 2 (use space instead of commas): ") ;
   scanf("%f %f", &x4, &y4);

   m1 = (y2 - y1)/(x2 - x1);
   m2 = (y4 - y3)/(x4 - x3); 
   t= m1 == m2;

   printf("\n If the lines are parallel output will be 1, otherwise 0");
   printf("\n Output: %f", t);


    return 0;
}