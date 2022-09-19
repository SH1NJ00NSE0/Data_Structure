#include <stdio.h>
#include <string.h>
int main()
{
   int a[25] = {0};
   char str[1000001];
   int m, i, state=0;

   gets(str);

   for (i = 0; str[i]; i++)
   {
      if (str[i] >= 'a' && str[i] <= 'z')
         str[i] -= 'a' - 'A';
      a[str[i] - 'A']++;
   }

   for (i = 0; i <= 25; i++)
      if (m > a[i])
         m = a[i];
   for (i = 0; i <= 25; i++)
   {
      if (m == a[i])
         state++;
      if (state >= 2)
      {
         printf("?");
         return 0;
      }
   }
   printf("%d", a[i]);
   return 0;
}