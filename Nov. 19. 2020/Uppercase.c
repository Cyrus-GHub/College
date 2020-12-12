// Prints uppercase version of a lowercase letter

#include <stdio.h>

int alpha(char a);

int main()
{
    printf("%c", alpha('b'));
    return 0;
}

int alpha(char a)
{
    if (a >= 65 && a <= 90)
        return a;

    else
        return a - 32;
}