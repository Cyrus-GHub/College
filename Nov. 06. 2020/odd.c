// Finds number of odd numbers and adds them
#include <stdio.h>
int main()
{
    int n, sum = 0, i, count = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\n Enter number: ");
        scanf("%d", &n);

        if (n % 2 == 1)
        {
            count += n % 2;
            sum += (n % 2) * n;
        }
    }
    printf("\n Number of odd numbers = %d", count);
    printf("\n Sum of all odd numbers= %d", sum);

    return 0;
}


