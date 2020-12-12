/* Series and parallel resistance, Current in circuit */
#include<stdio.h>
void main()
{
    float  t, rp, ip,r1, r2, r3, v, rs, is;

    printf("Enter the resistance of the 1st resistor: ");
    scanf("%f", &r1);
    printf("\nEnter the resistance of the 2nd resistor: ");
    scanf("%f", &r2);
    printf("\nEnter the resistance of the 3rd resistor: ");
    scanf("%f", &r3);

    rs= r1+r2+r3;

    printf("\n For series, the combined resistance is: %f ", rs);

    t= 1/r1 + 1/r2 + 1/r3;
    rp= 1/t;

    printf("\n For parallel, the combined resistance is: %f ", rp);

    printf("\nEnter the voltage: ");
    scanf("%f", &v);

    is= v/rs;
    ip= v/rp;

    printf("\nThe current flowing in the circuit, when resistors are in series is: %f",is);
    printf("\nThe current flowing in the circuit, when resistors are in parallel is: %f",ip);

}