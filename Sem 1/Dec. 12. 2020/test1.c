// static storage class

#include <stdio.h>

void increment()
{
    static int a = 1;
    printf("\n %d ", a);
    a++;
}

int main()
{
    increment();
    increment();
    increment();

    for (int i = 1; i <= 4; i++)
        increment();

    return 0;
}