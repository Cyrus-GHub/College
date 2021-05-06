// Uses : and ? Conditional Operators
#include <stdio.h>
int main()
{
    int class;

    printf("Enter your class: ");
    scanf("%d", &class);

    (class <= 12 ? printf("KIIT Student") : printf("KIIT University Student"));
}