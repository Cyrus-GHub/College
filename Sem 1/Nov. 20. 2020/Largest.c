// This program prints the largest among 'n' numbers and also prints the number of 'leaders'

#include <stdio.h>

int large(int n);
int leading(int n);

int main()
{
    printf("Largest number is: %d", large(5));

    printf("\n");
    printf("\n");

    printf("\n Number of leaders is: %d", leading(5));

    return 0;
}

// Function for 'largest number'

int large(int n)
{
    int next, largest = -2147483648;

    for (int j = 0; j < n; j++)
    {
        printf("Enter a number: ");
        scanf("%d", &next);

        if (next > largest)
        {
            largest = next;
        }
    }

    return largest;
}

// Function for 'number of leaders'

int leading(int n)
{
    int next, leader = -2147483648, count = 0;

    for (int j = 0; j < n; j++)
    {
        printf("Enter a number: ");
        scanf("%d", &next);

        if (next > leader)
        {
            leader = next;
            count++;
        }
    }

    return count;
}
