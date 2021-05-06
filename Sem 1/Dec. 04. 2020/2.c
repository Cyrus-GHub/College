// Swap 2 integers using pointer variables and function (Call by reference)

#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int a = 1, b = 2;
    printf("\n Entered values: \n");
    printf("\t a = %d, b = %d", a, b);

    swap(&a, &b);

    printf("\n");

    printf("\n Swapped values: \n");
    printf("\t a = %d, b = %d", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
