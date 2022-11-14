#include <stdio.h>
void outputArray(int *p, int n);

int main()
{
   int array[3] = {10, 20, 30};
   int size = sizeof(array) / sizeof(array[0]);
   outputArray(array, size);
}

void outputArray(int *p, int n)
{
   int i;
   for (i = 0; i < n; i++)
      printf("%d %d\n", p[i], *(p + i));
}