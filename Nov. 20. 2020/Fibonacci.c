// Prints the 'nth' fibonacci number using 'Recursive function'

#include <stdio.h>

int fibonacci(int n);

int main()
{
    int a, f;

    printf("Enter number: ");
    scanf("%d", &a);

    f = fibonacci(a);

    printf("\n The required Fibonacci number is %d", f);

    return 0;
}

int fibonacci(int n)
{
    return (n == 1 || n == 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2));
}