// Check whether 3 points make a triangle
#include <stdio.h>

int main()
{
  double x1, y1, x2, y2, x3, y3, m1, m2, m3;

  printf("Enter the coordinates of the 1st point: ");
  scanf("%lf %lf", &x1, &y1);

  printf("\nEnter the coordinates of the 2nd point: ");
  scanf("%lf %lf", &x2, &y2);

  printf("\nEnter the coordinates of the 3rd point: ");
  scanf("%lf %lf", &x3, &y3);

  m1 = (y2 - y1) / (x2 - x1);
  m2 = (y3 - y2) / (x3 - x2);
  m3 = (y1 - y3) / (x1 - x3);

  if (m1 != m2 && m2 != m3 && m3 != m1)
  {
    printf("\n The points you entered FORM a TRIANGLE");
  }

  else
  {
    printf("\n The points you entered DO NOT FORM a TRIANGLE");
  }

  return 0;
}