// Calculate number of players who scored a century
#include <stdio.h>
int main()
{
    float score, count = 0, i = 1; // i is loop count

loop:
    printf("Enter score of player no. %.1f: ", i);
    scanf("%f", &score);

    if (score < 0)
    {
        goto loop;
    }

    if (score >= 100)
    {
        count++;
    }

    i++;
    if (i <= 10)
    {
        goto loop;
    }

    printf("\n Number of players who scored a century = %.1f", count);

    return 0;
}