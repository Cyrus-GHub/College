// Structures and functions

#include <stdio.h>

struct book
{
    char name[20];
    float price;
    int pages;
};

void display(char *n, float p, int pg)
{
    printf("\n Name: %s, Price: $ %.2f, Pages: %d", n, p, pg);
}

void displayFull(struct book b)
{
    printf("\n Name: %s, Price: $ %.2f, Pages: %d", b.name, b.price, b.pages);
}

int main()
{
    struct book b = {"C", 18, 290};
    display(b.name, b.price, b.pages);
    displayFull(b);
    return 0;
}