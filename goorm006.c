#include <stdio.h>

int main()
{
   int str[100], i = 0, j;
   for (;; i++)
   {
      scanf("%d", &str[i]);
      if (str[i] == 0)
      {
         for (j = 0; j < i; j++)
            printf("%d ", str[i - j - 1]);
         return 0;
      }
   }

   return 0;
}