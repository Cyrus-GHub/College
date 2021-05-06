#include <stdio.h>

void fn1()
{
    printf("fn 1");
}

int fn2(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}

int *fn3()
{
    static int mx[3] = {1, 2, 3};
    return mx;
}

int **fn4()
{
    int var2 = 99;
    int *ptr2 = &var2;
    return *ptr2;
}

int *(*fn5())
{
    int var3 = 88;
    int *ptr3 = &var3;
    return *ptr3;
}


int main()
{
    fn1();
    printf("\n");

    printf("%d", fn2(2, 3));
    printf("\n");

    int *a;
    a = fn3();
    printf("%d ", a[0]);
    printf("\n");

    printf("%d",fn4());
    printf("\n");

    printf("%d",fn5());
    printf("\n");
    return 0;
}