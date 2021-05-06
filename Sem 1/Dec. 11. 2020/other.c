#include <stdio.h>
int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int(*p)[3]; // A single pointer pointing to entire row with 3 characters

    p = a;

    printf("\n %d is same as ", a[0][0]);
    printf("\n %d \n", p[0][0]);
    printf("\n %d is same as ", a[0][3]);
    printf("\n %d \n", p[0][3]);

    return 0;
}
