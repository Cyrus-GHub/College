// Prints reverse of a number
#include <stdio.h>
int main()
{
    long int i, rev = 0, og;

    printf("Enter the number: ");
    scanf("%ld", &i);

    og = i;

    do
    {
        rev = rev * 10 + i % 10;
        i = i / 10;
    } while (i != 0);

    printf("\n The reverse of the entered number is %ld", rev);

    if (og == rev)
        printf("\n Given number is a palindrome");

    else
    {
        printf("\n Given number is not a palindrome ");
    }

    return 0;
}