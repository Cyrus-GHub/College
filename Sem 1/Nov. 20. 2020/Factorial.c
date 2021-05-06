// Prints the factorial of a number using 'Recursive function'

#include <stdio.h>

int factorial(int n);

int main()
{
    int a, fact;

    printf("Enter number: ");
    scanf("%d", &a);

    fact = factorial(a);

    printf("\n Factorial of %d is %d", a, fact);

    return 0;
}

int factorial(int n)
{
    return (n == 1 ? 1 : n * factorial(n - 1));
}