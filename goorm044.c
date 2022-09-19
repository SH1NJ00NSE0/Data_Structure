#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, m, k, i, j, p, a, b, x, y, *tot, arr[300][300];
   scanf("%d %d", &n, &m);
   for (i = 0; i < n; i++)
      for (j = 0; j < m; j++)
         scanf("%d", &arr[i][j]);
   scanf("%d", &k);
   tot = (int *)calloc(k, sizeof(int));
   for (p = 0; p < k; p++)
   {
      scanf("%d %d %d %d", &a, &b, &x, &y);
      for (i = a; i <= x; i++)
         for (j = b; j <= y; j++)
            tot[p] += arr[i - 1][j - 1];
   }
   for (i = 0; i < k; i++)
      printf("%d\n", tot[i]);
   free(tot);
   return 0;
}