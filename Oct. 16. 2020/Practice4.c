/* Display the time period of a pendulum for different string lengths */
#include <stdio.h>
#include <math.h>
#define g 9.8
#define pi 3.14

int main()
{
  float l,T;


  l = 10;
  T = 2*pi*sqrt(l/g);
  printf("The 'Time Period of Simple Pendulum' for string length 10m (T1) is: %f", T);
  
  l= 20;
  T = 2*pi*sqrt(l/g);
  printf("\n The 'Time Period of Simple Pendulum' for string length 20m (T2) is: %f", T);

  l= 30; 
  T = 2*pi*sqrt(l/g);
  printf("\n The 'Time Period of Simple Pendulum' for string length 30m (T3) is: %f", T);
   
  l=40;
  T = 2*pi*sqrt(l/g);
  printf("\n The 'Time Period of Simple Pendulum' for string length 40m (T4) is: %f", T);
 
  l= 50;
  T = 2*pi*sqrt(l/g);
  printf("\n The 'Time Period of Simple Pendulum' for string length 50m (T5) is: %f", T);

  return 0; 

}