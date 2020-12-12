#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the length of the three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b))
    {printf("These are the sides of a triangle");}
    
    else
    {printf("These are not the sides of a triangle");}

    return 0;
}