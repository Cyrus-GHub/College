// auto, register, static, extern

#include <stdio.h>

int a = 5;

void fn()
{
    static int b = 5;
    b++;

    printf("a=%d & b=%d\n", a, b);
}

int main()
{
    while (a--)
    {
        fn();
    }
    return 0;
}