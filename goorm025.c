#include <stdio.h>
#include <string.h>
int ispalandrom(char *str)
{
   int len = 0, i;
   int flag = 1;
   len = strlen(str);

   for (i = 0; i < len / 2; i++)
   {
      if (str[i] != str[len - i - 1])
      {
         flag = 0;
         break;
      }
   }

   return flag;
}

int main()
{
   char mystr1[256];
   gets(mystr1);
   if (ispalandrom(mystr1))
      printf("Yes\n");
   else
      printf("No\n");
   return 0;
}