// Using Arrow Operator (->)

#include <stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    };
    struct book *p, b[5];
    float sum = 0;

    // &b is address of 1D array (here, 5 element structure)
    // b is address of 1st structure of this array

    int i;
    p = b; // p = &b is NOT valid

    for (i = 0; i < 5; i++)
    {
        printf("\n Enter book NAME, PRICE and PAGES: \n");
        scanf("%s%f%d", (p + i)->name, &(p + i)->price, &(p + i)->pages);
    }

    // SUM of Prices
    for (i = 0; i < 5; i++)
    {
        sum += p[i].price;
    }

    printf("\n Your enteries: \n");

    for (i = 0; i < 5; i++)
    {
        printf("\n Name: %s, Price: Rs %.2f, Pages: %d", (p + i)->name, (p + i)->price, (p + i)->pages);
    }
    printf("\n Sum of prices: Rs %.2f", sum);

    printf("\n -------------------------------------------- \n");
    printf("\n Accessing members without Arrow Operator(->) is also valid: \n");

    for (i = 0; i < 5; i++)
    {
        printf("\n Name: %s, Price: Rs %.2f, Pages: %d", p[i].name, p[i].price, p[i].pages);
    }

    return 0;
}