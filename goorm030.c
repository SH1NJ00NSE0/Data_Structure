#include <stdio.h>

void f(int n)
{
   int i;
   if (n == 1)
   {
      printf("*\n");
      return;
   }
   else
      f(n - 1);
   for (i = 0; i < n; i++)
      printf("*");
   printf("\n");
}
int main()
{
   int n;
   scanf("%d", &n);
   f(n);
   return 0;
}