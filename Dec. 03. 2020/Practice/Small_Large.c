#include <stdio.h>
int main()
{
    int n, d = 0, flag = 0;
    long long int ln;

    printf("\n Enter the large number: ");
    scanf("%lld", &ln);

    printf("\n Enter the number to be searched within the large number: ");
    scanf("%d", &n);

    while (ln > 0)
    {
        d = ln % 100;
        if (d == n)
        {
            printf("\n The number is present in the large number");
            flag++;
            break;
        }

        ln /= 10;
    }

    if (flag == 0)
        printf("\n The number is NOT present in the large number");

    return 0;
} 