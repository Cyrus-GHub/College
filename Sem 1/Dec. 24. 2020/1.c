// Read contents of a file, store it onto an array and find sum of elements

#include <stdio.h>

int main()
{
    FILE *fp;
    int a[10], i, sum = 0;
    fp = fopen("sample2.txt", "r");

    for (i = 0; i < 10; i++)
    {
        fscanf(fp, "%d", &a[i]);
        sum += a[i];
    }

    printf("Array:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\nSum = %d", sum);
    fclose(fp);
    return 0;
}
