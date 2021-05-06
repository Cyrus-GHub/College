// Strucutre Example

#include <stdio.h>
int main()
{
    struct book
    {
        char name[100];
        float price;
        int pages;
    } b1, b2;

    printf("\n Enter the NAME, PRICE and No. OF PAGES of the 1st book: \n");
    scanf("%s%f%d", &b1.name, &b1.price, &b1.pages);

    printf("\n Enter the NAME, PRICE and No. OF PAGES of the 2nd book: \n");
    scanf("%s%f%d", &b2.name, &b2.price, &b2.pages);

    printf("\n Your enteries: \n");
    printf("\n Book 1: %s, $%.2f, %d", b1.name, b1.price, b1.pages);
    printf("\n Book 2: %s, $%.2f, %d", b2.name, b2.price, b2.pages);

    return 0;
}