// Calculates Gross Salary
#include <stdio.h>

int main()
{
   double bs, hra, da, gs;  // Base Salary, House Rent Allowance, Dearness Allowance, Gross Salary

   printf("Enter Basic Salary: ");
   scanf("%lf", &bs);

   if (bs < 1500)
   {gs = bs + bs*0.1 + bs*0.4;}
   
   else
   {gs = bs + 500 + bs*0.4;}
   
   printf("\nGross Salary = Rs %lf", gs);

   return 0;
}
