#include <stdio.h>

typedef struct
{
   int x, y;
} Point;

int main()
{
   Point p1;
   p1.x = 10;
   p1.y = 20;
   printf("%d %d\n", p1.x, p1.y);
   return 0;
}