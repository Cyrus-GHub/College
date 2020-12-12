// Calculates number of characters between 2 inputs
#include <stdio.h>
int main()
{
    char first,second;

    printf("Enter 2 alphabets: ");
    scanf("%c %c", &first, &second);
   
    printf("Number of characters between %c and %c = %d", first, second, second-first);

    return 0;
}
