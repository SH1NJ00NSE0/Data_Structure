#include <stdio.h>

int main()
{
   int n, i, j;
   int str[100][100];
   scanf("%d", &n);

   for (i = 0; i < n; i++)
   {
      if (i % 2)
         for (j = n - 1; j >= 0; j--)
            printf("%d ", i * n + j + 1);
      else
         for (j = 0; j < n; j++)
            printf("%d ", i * n + j + 1);
      printf("\n");
   }
   return 0;
}