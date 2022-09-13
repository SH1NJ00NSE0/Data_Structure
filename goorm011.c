#include <stdio.h>
#include <string.h>

int main()
{

   int n, score, cnt;
   char str[80];

   scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {
      cnt = 0;
      score = 1;
      scanf("%s", str);
      for (int j = 0; j < strlen(str); j++)
      {
         if (str[j] == 'O')
         {
            cnt += score;
            score++;
         }
         else
            score = 1;
      }
      printf("%d\n", cnt);
   }
}