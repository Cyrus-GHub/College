/* Display the velocity and Disctance covered by a stone */
#include <stdio.h>
#define g 9.8
void main()
{
   float u,t,v,s;

   printf("Give the intial velocity: ");
   scanf("%d", &u);

   t=1;
   v= u + g*t;
   s = u*t + g*t*t/2;

   printf("\n Velocity = %f m/s and Distance covered = %f m after 1s", v,s);

   t++,
   v= u + g*t;
   s = u*t + g*t*t/2;

   printf("\n Velocity = %f m/s and Distance covered = %f m after 2s", v,s);


   t++,
   v= u + g*t;
   s = u*t + g*t*t/2;

   printf("\n Velocity = %f m/s and Distance covered = %f m after 3s", v,s);

   
   t++,
   v= u + g*t;
   s = u*t + g*t*t/2;

   printf("\n Velocity = %f m/s and Distance covered = %f m after 4s", v,s);


   t++,
   v= u + g*t;
   s = u*t + g*t*t/2;

   printf("\n Velocity = %f m/s and Distance covered = %f m after 5s", v,s);

}