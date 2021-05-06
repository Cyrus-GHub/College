#include <stdio.h>

int cy_i;

struct people
{
    char cy_name[25];
    int cy_age;
    char cy_sex;
    char cy_dob[15];
} P[10];

void output()
{
    printf("Sl no. \t Name \t Age \n");

    for (cy_i = 0; cy_i < 10; cy_i++)
    {
        if (P[cy_i].cy_age > 13)
        {
            printf("%d \t %s \t %d \t %s \n", cy_i + 1, P[cy_i].cy_name, P[cy_i].cy_age, P[cy_i].cy_dob);
        }
    }
}

int main()
{
    for (cy_i = 0; cy_i < 10; cy_i++)
    {
        printf("\nEnter details for person %d\n", cy_i + 1);
        printf("\nEnter name: ");
        scanf("%s", &P[cy_i].cy_name);

        printf("Enter age: ");
        scanf("%d", &P[cy_i].cy_age);

        printf("Enter gender(M/F/O): ");
        scanf("%s", &P[cy_i].cy_sex);
    }
    printf("\n");

    output();

    return 0;
}