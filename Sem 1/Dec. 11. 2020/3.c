#include <stdio.h>

void add(int (*pa)[3], int *pb);

int main()
{
    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[2] = {0, 0};
    int(*pa)[3], *pb;
    int i, j;

    pa = a;
    pb = b;

    add(a, b);
    for (i = 0; i < 2; i++)
    {
        printf("\n %d", pb[i]);
    }

    return 0;
}

void add(int (*pa)[3], int *pb) // To pass a 2-D array to a pointer, the formal parameter should be a pointer pointing to the size of a row
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            pb[i] += pa[i][j];
        }
    }
}
