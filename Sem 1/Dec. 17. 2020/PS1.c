// Sort employee's salary in slabs

#include <stdio.h>
int main()
{
    int i;
    struct Employee
    {
        char name[100];
        char id[20];
        float salary;
    };

    struct Employee E[4];

    for (i = 0; i < 4; i++)
    {
        printf("\n Enter name, ID and salary: \n");
        scanf("\n %s %s %f", &E[i].name, &E[i].id, &E[i].salary);
    }

    printf("\n----------------------------------------\n");
    printf("\n SLAB 1\n");
    for (i = 0; i < 4; i++)
    {
        if (E[i].salary <= 10000)
            printf("\n %s (%s) has salary %.2f", E[i].name, E[i].id, E[i].salary);
    }
    printf("\n----------------------------------------\n");
    printf("\n");
    printf("\n----------------------------------------\n");
    printf("\n SLAB 2\n");
    for (i = 0; i < 4; i++)
    {
        if (E[i].salary > 10000 && (E[i].salary <= 50000))
            printf("\n %s (%s) has salary %.2f", E[i].name, E[i].id, E[i].salary);
    }
    printf("\n----------------------------------------\n");
    printf("\n");
    printf("\n----------------------------------------\n");
    printf("\n SLAB 3\n");
    for (i = 0; i < 4; i++)
    {
        if (E[i].salary > 50000)
            printf("\n %s (ID: %s) has salary %.2f", E[i].name, E[i].id, E[i].salary);
    }
    printf("\n----------------------------------------\n");
    printf("\n");

    return 0;
}