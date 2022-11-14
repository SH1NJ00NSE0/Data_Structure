#include <stdio.h>
#include <stdlib.h>
int maxh(int *height, int n)
{
   int i;
   int maxn = *height;
   for (i = 0; i < n; i++)
      if (*(height + i) > maxn)
         maxn = *(height + i);
   return maxn;
}
int main()
{
   int n;
   int *height;
   int i;
   scanf("%d", &n);

   height = (int *)malloc(n);
   for (int i = 0; i < n; i++)
      scanf("%d", height + i);

   printf("%d\n", maxh(height, n));

   free(height);
   return 0;
}