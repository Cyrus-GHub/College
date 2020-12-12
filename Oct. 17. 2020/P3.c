/* Check if Wheatstone Bridge is balanced or not. Also,find variable resistance if not balanced */
#include <stdio.h>
int main()
{
  float P, Q, R, S;

  printf("Enter resistances: ");
  scanf("%f %f %f %f", &P, &Q, &R, &S);

  if (P * S == R * Q)
  {
    printf("\n The Wheatstone Bridge is balanced");
    return 0;
  }

  printf("\n The Wheatstone bridge is NOT balanced");
  
  S = R * Q / P;

  printf("\n Put S = %f to balance the bridge", S);

  return 0;
}