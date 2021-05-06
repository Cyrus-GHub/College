// Pointer behaviour in 1-D array

#include <stdio.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a;
    // *p = &a : address of whole array
    // *p = a : address of first element of array

    printf("\n %p", &a); // %p is used to print the address of a pointer
    printf("\n %d", &a);
    printf("\n %d", *&a);
    printf("\n %d", *a);
    printf("\n %d", *(a + 1));
    printf("\n %d", *(a + 9));
    return 0;
}