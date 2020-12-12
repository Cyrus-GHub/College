// Position, Size and Types of images formed by a concave mirror
#include <stdio.h>

int main()
{
    int p;

    printf("\n Press 1, if the objects is at infinity");
    printf("\n Press 2, if the objects is beyond C");
    printf("\n Press 3, if the objects is at C");
    printf("\n Press 4, if the objects is between C & F");
    printf("\n Press 5, if the objects is at F");
    printf("\n Enter Value: ");
    scanf("%d", &p);

    if(p == 1)
    {
       printf("\nPosition of image= At Focus F ,Size of Image= Highly Diminished ,Nature of Image = Real and Inverted \n");
    }

    else if(p == 2)
    {
        printf("\nPosition of image= Between F & C ,Size of Image= Diminished ,Nature of Image = Real and Inverted\n");
    }

    else if(p == 3)
    {
        printf("\nPosition of image= At C ,Size of Image= Same size  ,Nature of Image = Real and Inverted \n");
    }

    else if(p == 4)
    {
        printf("\nPosition of image= Beyond C,Size of Image= Enlarged ,Nature of Image = Real and Inverted \n");
    }

    else if(p == 5)
    {
        printf("\nPosition of image= At Infinity ,Size of Image= Highly Enlarged ,Nature of Image = Real and Inverted \n");
    }

    else
    {
        printf("INVALID INPUT");
    }
    
    return 0;

}