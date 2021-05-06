// Checks vehicle velocity, acceleration status
#include <stdio.h>
int main ()
{
    int a;

    printf("Enter the value of acceleratoin: ");
    scanf("%d", &a);

    if(a == 0)
    {
        printf("\n The vehicle moves with constant velocity");
    }

    else if(a > 0)
    {
        printf("\n The vehicle is accelerating");
    }

    else
    {
        printf("\n The vehicle is deccelerating");
    }
    
    return 0;
}