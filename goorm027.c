#include <stdio.h>
void inputArray(int a[][4], int r);
void outputArray(int a[][4], int r);
int main()
{
   int score[3][4];
   int i, j;
   inputArray(score, 3);
   outputArray(score, 3);
   return 0;
}

void inputArray(int a[][4], int r)
{
   int i, j;
   for (i = 0; i < r; i++)
      for (j = 0; j < 4; j++)
         scanf("%d", &a[i][j]);
}
void outputArray(int a[][4], int r)
{
   int i, j;
   double sum;
   for (i = 0; i < r; i++)
   {
      sum = 0;
      for (j = 0; j < 4; j++)
         sum += a[i][j];
      printf("총점 : %.0f, 평균 : %.2f\n", sum, sum / 4);
   }
}