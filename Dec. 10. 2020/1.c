// Copying a string to another

#include <stdio.h>
int main()
{
    char first[100], second[100];
    int i = 0;

    printf("Enter first string: ");
    gets(first);

    while (first[i])
    {
        second[i] = first[i];
        i++;
    }
    
    second[i] = '\0';
    printf("\n Duplicate: %s", second);
    return 0;
}
