/* Print largest and smallest among two numbers */
#include <stdio.h>
int main()
{
  int a, b, min, max;

  printf("\n Enter 2 numbers: ");
  scanf("%d %d", &a, &b);

  max = a;

  if (b > max)
    max = b;

  min =a;
  
  if(b < min)
  min = a  ;

  printf("\n The largest No. is %d", max);
  printf("\n The smallest No. is %d", min);

  return 0;
}