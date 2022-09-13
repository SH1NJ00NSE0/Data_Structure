#include <stdio.h>

int main()
{
   char a[10], i;
   for (i = 0; i < 10; i++)
      scanf("%c", &a[i]);
   for (i = 0; i < 10; i++)
      if (i % 2)
         printf("%c", a[9 - i]);

   return 0;
}