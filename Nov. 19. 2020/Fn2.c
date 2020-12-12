// Usecase of user-defined functions where int and char are used interchangeably

#include <stdio.h>

void ascii(int n, char ch);

int main()
{
    ascii(30, '+');

    printf("\n");
    printf("\n");

    ascii('a', '$');

    printf("\n");
    printf("\n");

    ascii('a', 35);

    return 0;
}

void ascii(int n, char ch)
{
    for (int i = 0; i < n; i++)
        printf("%c", ch);
}