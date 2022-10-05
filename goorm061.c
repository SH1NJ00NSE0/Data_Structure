#include <stdio.h>
#include <math.h>
#define N 5

typedef struct
{
   int x, y;
} POINT;

void inputPoint(POINT *p);
void outputPoint(POINT *p);
double distance(POINT *p, POINT *q);

int main()
{
   int i, mi = 0;
   POINT p[5];
   POINT origin = {0, 0};
   for (i = 0; i < 5; i++)
      inputPoint(p + i);
   // for (i = 0; i < 5; i++)
   //    outputPoint(p + i);
   for (i = 1; i < 5; i++)
      if (distance(&p[mi], &origin) >= distance(&p[i], &origin))
         if (p[mi].x + p[mi].y > p[i].x + p[i].y)
            mi = i;

   printf("원점에서 가장 가까운 좌표 : (%4d, %4d)", p[mi].x, p[mi].y);
   return 0;
}
void inputPoint(POINT *p)
{
   scanf("%d %d", &p->x, &p->y);
}
void outputPoint(POINT *p)
{
   printf("(%4d, %4d)\n", p->x, p->y);
}
double distance(POINT *p, POINT *q)
{
   return sqrt(pow(p->x - q->x, 2) + pow(p->y - q->y, 2));
}