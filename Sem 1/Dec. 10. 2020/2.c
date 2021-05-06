// Find length of string

#include <stdio.h>
int main()
{
    char str[100];
    int i = 1;

    printf("Enter a string: ");
   gets(str);

    while (str[++i])
        ;

    printf("\n Length of string (including spaces): %d", i);
    return 0;
}