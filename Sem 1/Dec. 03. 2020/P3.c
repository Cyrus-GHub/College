// Find sum of elements present at even index positions using pointer variables

#include <stdio.h>
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int i, *p = arr, sum = 0;

    for (i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            sum += *(p + i);
        }

        else
        {
            continue;
        }
    }

    printf("%d", sum);
    return 0;
}