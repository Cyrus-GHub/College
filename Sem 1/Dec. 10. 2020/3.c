// Frequency of characters in string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch, i = 0, count = 0;

    printf("\n Enter string: ");
    gets(str);

    printf("\n Which characters frequency do you want to find? : ");
    scanf("%c", &ch);

    while (str[i])
    {
        count += ch == str[i++];
    }

    printf("\n Frequency of %c = %d", ch, count);
    return 0;
}