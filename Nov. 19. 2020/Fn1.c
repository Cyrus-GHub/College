// Usecase of user-defined functions

#include <stdio.h>

void equal1();
void equal2();
void equal3();
void symbol(int n, char ch);

int main()
{
    equal1();
    printf("\n");

    equal2();
    printf("\n");

    equal3(20);
    printf("\n");
    printf("\n");

    symbol(30, '$');
    printf("\n");

    return 0;
}

void equal1()
{
    printf("=");
}

void equal2()
{
    for (int i = 0; i < 10; i++)
        printf("=");
}

void equal3(int n)
{
    for (int i = 0; i < n; i++)
        printf("=");
}

void symbol(int n, char ch)
{
    for (int i = 0; i < n; i++)
        printf("%c", ch);
}