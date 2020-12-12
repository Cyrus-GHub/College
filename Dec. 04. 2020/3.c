// Sum of first n elements of two array, return 0 (equal sum), return 1 (1st array sum is larger), return 2 (2nd array sum is larger)

#include <stdio.h>

int sum(int *a, int *b, int n);

int main()
{
    int flag;
    int x[5] = {1, 2, 3, 4, 5};
    int y[3] = {6, 7, 8};

    flag = sum(x, y, 3);

    if (flag == 0)
        printf("Both sum are equal");

    else if (flag == 1)
        printf("x is greater than y");

    else
        printf("y is greater than x");

    return 0;
}

int sum(int *a, int *b, int n)
{
    int i, s1 = 0, s2 = 0;
    
    for (i = 0; i < n; i++)
    {
        s1 += a[i];
        s2 += b[i];
    }

    if (s1 == s2)
        return 0;
    else if (s1 > s2)
        return 1;
    else
        return 2;
}
