//Prints the gcd (Greatest common divisior) of 2 numbers using 'Recursive function'

#include <stdio.h>

int gcd(int n1, int n2);

int main()
{
    int g, a, b;

    printf("Enter two positive integrs: ");
    scanf("%d %d", &a, &b);

    g = (a > b ? gcd(a, b) : gcd(b, a));

    printf("\n GCD of %d and %d is %d", a, b, g);

    return 0;
}

int gcd(int n1, int n2)
{
    return (n1 % n2 == 0 ? n2 : gcd(n2, n1 % n2));
}