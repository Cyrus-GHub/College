// Find out the largest and second largest number present in the array using pointers
#include <stdio.h>
int main()
{
    int arr[20] = {1, 3, 2, 5, 4, 7, 6, 9, 8, 10, 13, 11, 12, 14, 15, 16, 18, 17, 19, 20};
    int *p = arr, l = 0, sl = 0, i;

    l = *p;
    sl = *(p + 1);

    for (i = 2; i < 20; i++)
    {
        if (*(p + i) >= l)
            sl = l;

        l = *(p + i);
    }

    printf("\n Largest: %d", l);
    printf("\n Second Largest: %d", sl);
    return 0;
}
