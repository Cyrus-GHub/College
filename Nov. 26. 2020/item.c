// Searches if an item is in the array, if present, it prints its position

#include <stdio.h>
int main()
{
   int i, item, m[20], p = -1;

   for (i = 0; i < 20; i++)
   {
      printf("\n Enter data: ");
      scanf("%d", &m[i]);
   }
   printf("\n Enter item to be searched: ");
   scanf("%d", &item);

   for (i = 0; i < 20; i++)
   {
      if (item == m[i])
      {
         p = i;
         break;
      }
   }

   if (p == -1)
      printf("\n Item is not present");
   else
      printf("\n Item is at position %d", p + 1);

   return 0;
}