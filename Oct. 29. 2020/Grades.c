// Tells divisoin based on grades
#include <stdio.h>
int main()
{
    int p,c,m,e,b,per;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d", &p, &c, &m, &e, &b);
    
    per = (p+c+m+e+b)/5;
    
    if (per >=60)
    {
        printf("First Division");  
    }


    else if (per >=50)
    {
        printf("Second Division");  
    }

    else if (per >=40)
    {
        printf("Third Division");  
    }

    else
    {
        printf("Fail");  
    }

    return 0;                             
}