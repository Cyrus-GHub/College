/* Print KIIT or KIIT University Student */
#include <stdio.h>
int main()
{
  int class;

  printf("Enter Class: ");
  scanf("%d", &class);

  printf("\n KIIT");

  if (0 < class > 12)
    printf(" University ");

  printf(" Student ");

  return 0;
}