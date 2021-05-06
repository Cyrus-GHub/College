// Pendulum question using for loop

#include <stdio.h>
#include <math.h>
#define pi 3.14
#define g 9.8

int main()
{
    int i;
    float T, l;

    for (l = 10; l <= 50; l += 10)
    {
        T = 2.0 * pi * sqrt(l / g);
        printf("\n The 'Time Period of Simple Pendulum' for string length %.1f is: %f", l, T);
    }

    return 0;
}
