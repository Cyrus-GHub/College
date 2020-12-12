// Using string in C

#include <stdio.h>
int main()
{
    char MyName[6] = {"Cyrus"}; // Size has to be 6 beacuse of the invisible '\0'
    char other[6] = {'C', 'y', 'r', 'u', 's', '\0'};

    printf("\n Hi! \n My name is %s \n", MyName);
    printf("\n Hi! \n My name is %s \n", other);

    char str[15];
    printf("\n Enter your favourite biscuit: ");
    scanf("%s", &str);

    printf("\n %s is <3 \n", str); // This prints everything stored in the array named str starting from the specified address till it comes across '\0' (which is hidden in this case). Also, str is address of first character in the array named str

    char name[] = "Elon Musk";
    char prof[] = "Entrepreneur and Philanthropist";

    printf("\n Full Name: %s", name);
    printf("\n Last Name: %s \n", name + 4);

    printf("\n Professions: %s", prof);
    printf("\n One of the Professions: %s \n", prof + 16);


    return 0;
}