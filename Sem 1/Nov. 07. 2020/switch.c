// A usecase of switch statement

#include <stdio.h>
int main()
{
    int ItemN;

    printf("\n Enter Item Number (1-5): ");
    scanf("%d", &ItemN);

    switch (ItemN)
    {
    case 1:
        printf("Vanilla Ice Cream");
        break;
    case 2:
        printf("Chocolate Ice Cream");
        break;
    case 3:
        printf("Mango Ice Cream");
        break;
    case 4:
        printf("Pista Ice Cream");
        break;
    case 5:
        printf("Orange Ice Cream");
        break;
    default:
        printf("Only 5 ice cream flavours available");
    }

    return 0;
}