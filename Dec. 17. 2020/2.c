// Array of structures example

#include <stdio.h>
int main()
{
    struct book
    {
        char name[100];
        float price;
        int pages;
    };

    struct book b[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n Enter name,price and pages: \n");
        scanf("%s %f %d", &b[i].name, &b[i].price, &b[i].pages);
    }

    printf("\n Your enteries: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n Book %d: %s, $%.2f, %d", i + 1, &b[i].name, &b[i].price, &b[i].pages);
    }

    return 0;
}