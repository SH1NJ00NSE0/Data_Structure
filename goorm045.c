#include <stdio.h>
#include <math.h>

int main()
{
   int i, j;
   float bestEl[2] = {0}, bestLa[2] = {0}, normal = 32768;
   float enso[11][2] = {{1990, 0.6},
                        {1991, 0.2},
                        {1992, 1.1},
                        {1993, 0.5},
                        {1994, 0.1},
                        {1995, 1.2},
                        {1996, -0.3},
                        {1997, -0.1},
                        {1998, 2.2},
                        {1999, -0.7},
                        {2000, -1.1}};
   printf("엘니뇨 : ");
   for (i = 0; i < 11; i++)
   {
      if (enso[i][1] > 0)
      {
         if (enso[i][1] > bestEl[1])
         {
            bestEl[0] = enso[i][0];
            bestEl[1] = enso[i][1];
         }
         printf("%.0f ", enso[i][0]);
      }
   }
   printf("\n가장 강한 엘니뇨 : %.0f\n", bestEl[0]);
   printf("라니냐 : ");
   for (i = 0; i < 11; i++)
   {
      if (enso[i][1] < 0)
      {
         if (enso[i][1] < bestLa[1])
         {
            bestLa[0] = enso[i][0];
            bestLa[1] = enso[i][1];
         }
         printf("%.0f ", enso[i][0]);
      }
   }
   printf("\n가장 강한 라니냐 : %.0f\n", bestLa[0]);
   printf("가장 정상적인 해 : ");
   for (i = 0; i < 11; i++)
   {
      if (fabs(enso[i][1]) < normal)
      {
         normal = enso[i][1];
      }
   }
   for (i = 0; i < 11; i++)
      if (fabs(enso[i][1]) <= normal)
         printf("%.0f ", enso[i][0]);
   return 0;
}
