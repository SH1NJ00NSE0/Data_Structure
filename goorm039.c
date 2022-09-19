#include <stdio.h>

void inputArray(int a[][4], int row)
{
   int i, j;
   for (i = 0; i < row; i++)
      for (j = 0; j < 4; j++)
         scanf("%d", &a[i][j]);
}

int totArray(int *a, int size)
{
   int i, tot = 0;
   for (i = 0; i < size; i++)
      tot += *(a + i);
   return tot;
}

int main()
{
   int score[3][4];
   int i, j, tot;
   double avg;
   // printf("학생 3명, 각각 네 과목의 점수를 입력하세요\n");
   inputArray(score, 4);
   for (i = 0; i < 3; i++)
   {
      tot = totArray(score[i], 4);
      avg = tot / 4.0;
      printf("총점 : %.d, 평균 : %.2lf\n", tot, avg);
   }

   return 0;
}