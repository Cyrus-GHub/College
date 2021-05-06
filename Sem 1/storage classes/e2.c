#include <stdio.h>

int a;
extern fn();

int main()
{
    a = 5;
    fn();
}