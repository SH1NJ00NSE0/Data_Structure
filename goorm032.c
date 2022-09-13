#include <stdio.h>
#include <string.h>
int main()
{
   int a[25] = {0};
   char str[1000001];
   int m, i;

   gets(str);

   for (i = 0; str[i]; i++)
   {
      if (str[i] >= 'a' && str[i] <= 'z')
         str[i] -= 'a' - 'A';
      a[str[i] - 'A']++;
   }

   for (i = 0; i <= 25; i++)
      if (a[i] && m > a[i])
         m = a[i];
         // printf("%c : %d\n", i + 'A', a[i]);

   return 0;
}