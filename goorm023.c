#include <stdio.h>
int main()
{
   int a[25] = {0};
   char str[1000001];
   int i;

   gets(str);

   for (i = 0; str[i]; i++)
      a[str[i] - 'A']++;

   for (i = 0; i <= 25; i++)
      if (a[i])
         printf("%c : %d\n", i + 'A', a[i]);
   return 0;
}