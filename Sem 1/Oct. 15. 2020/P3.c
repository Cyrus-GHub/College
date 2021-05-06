/* Secondary voltage */
#include <stdio.h>
void main()
{
  int pt, st, pv, sv;
  
  printf("Enter the primary voltage: ");
  scanf("%d", &pv);
  printf("\n Enter the number of primary turns: ");
  scanf("%d", &pt);
  printf("\n Enter the number of secondary turns: ");
  scanf("%d", &st);
  
  sv= (pv*st)/pt;

  printf("\n Secondary voltage is %d volts", sv);
}