/* For a number x, this program finds square if x<0 and square root if x>0 */
#include <stdio.h>
#include <math.h>
int main()
{
    int x, S, Sq;
    printf("Enter number: ");
    scanf("%d", &x);

    if (x <= 0)
    {
        S = pow(x, 2);
        printf("f(x) = %d", S);
        return 0;
    }

    if (x > 0)
    {
        Sq = sqrt(x);
        printf("f(x) = %d", Sq);

        return 0;
    }

}