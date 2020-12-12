// Addition of integers using function with a pointer variable as its parameter

#include <stdio.h>

int add(int *point);
int main()
{
    int num[10];

    printf("Enter numbers: ");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("\n Sum = %d", add(num));

    return 0;
}

int add(int *point)
{
    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += *(point + i);
    }

    return sum;
}