// Multiply 2 matrices of user defined size

#include <stdio.h>
int main()
{
    int r1, r2, c1, c2, i, j, k;
    printf("\n We will be multiplying Matrix 1 with Matrix 2");
    printf("\n");

    printf("\n Enter the size of matrix 1 in the following format: row <space> column: "); // User defines the size of the first matrix
    scanf("%d %d", &r1, &c1);

    int mx1[r1][c1];

    printf("\n Enter Data: \n"); // Data entry for first matrix starts

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mx1[i][j]);
        }
    }

    printf("\n Enter the size of matrix 2 in the following format: row <space> column: "); // User defines the size of the first matrix
    scanf("%d %d", &r2, &c2);

    int mx2[r2][c2];

    printf("\n Enter Data: \n"); // Data entry for second matrix starts

    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &mx2[i][j]);
        }
    }

    // Multiplication process

    int mul[r1][c2];

    if (c1 == r2)
    {
        printf("multiply of the matrix=\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    mul[i][j] += mx1[i][k] * mx2[k][j];
                }
            }
        }
    }

    else
    {
        printf("\n The matrices can't be multiplied"); // Error message
    }

    // Printing the result

    printf("\n Product: \n");

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}