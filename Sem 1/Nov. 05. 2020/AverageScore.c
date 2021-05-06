// Calculate average score of players
#include <stdio.h>
int main()
{
    float score, i =1, count = 1, sum_score = 0, avg_score;

loop:
    printf("Enter score of player no. %.1f: ", i);
    scanf("%f", &score);

    sum_score += score;

    count++;
    i++;
    
    if (count <= 10)
    {
        goto loop;
    }

    avg_score = sum_score / 10;

    printf("\n Average score = %f", avg_score);

    return 0;
}