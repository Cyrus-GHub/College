#include <stdio.h>
#include <string.h>
int main()
{

    char name[10][8], duplicate[10][8], temp[8];
    int i, j, n;

    printf("Enter number of employees: \n");
    scanf("%d", &n);
    printf("Enter %d names: \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", name[i]);
        strcpy(duplicate[i], name[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

        printf("------------------------------------------\n");
    printf("Original        Sorted\n");

    for (i = 0; i < n; i++)
    {
        printf("%s\t\t%s\n", duplicate[i], name[i]);
    }

    return 0;
}