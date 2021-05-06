// Prints the sum of digits of a number using 'Recursive function'

#include <stdio.h>

int sum(int n);

int main()
{
    int a, s;

    printf("Enter number: ");
    scanf("%d", &a);

    s = sum(a);

    printf("\n Sum of digits of %d is %d", a, s);

    return 0;
}

int sum(int n)
{
    return (n / 10 ? n % 10 + sum(n / 10) : n);
}