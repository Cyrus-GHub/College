// Prints transpose of a 4X4 matrix

#include <stdio.h>
int main()
{
    int A[4][4], B[4][4], i, j;

    //input
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Enter data: ");
            scanf("%d", &A[i][j]);
        }
    }

    //processing
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            B[i][j] = A[j][i];
        }
    }

    //output
    printf("\n Original matrix: \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf(" %d \t", A[i][j]);
        }
        printf("\n");
    }

    printf("\n Transpose of the matrix: \n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf(" %d \t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
