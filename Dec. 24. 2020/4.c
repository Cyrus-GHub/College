// Count chars, blank spcaes, tabs and newlines in a file

#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *fp;
   char ch;
   int noc = 0, nob = 0, not = 0, non = 0;
   fp = fopen("sample.txt", "r");

   while ((ch = fgetc(fp)) != EOF)
   {
      noc++;
      if (ch == " ")
         nob++;
      if (ch == '\t')
         not ++;
      if (ch == '\n')
         non++;
   };

   fclose(fp);

   printf("\n No. of characters = %d", noc);
   printf("\n No. of blank spaces = %d", nob);
   printf("\n No. of tab = %d", not );
   printf("\n No. of newlines = %d", non);

   return 0;
}
