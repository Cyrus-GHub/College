/* Sum of the sides of triangle */
#include<stdio.h>
int main()
{
    float a, b, c, t, s;
    
    printf("Enter sides of triangle (A B C): ");
    scanf("%f %f %f", &a, &b, &c);
   
    t = ((a + b) > c) && ((b + c) > a) && ((c + a) > b);
    s = t * (a + b + c);

    printf("\n If this isn't a triangle, output will be 0");
    printf("\n If this is a traingle, the sum of the sides is: %f", s);  

    return 0;   
}