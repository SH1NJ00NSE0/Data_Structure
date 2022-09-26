#include <stdio.h>
#include <string.h>
#define NUM 3
typedef struct
{
   char name[10];
   int age;
} PERSON;

void inputData(PERSON *p);
void outputData(PERSON *p);
int main()
{
   PERSON p[3];
   int i;

   for (i = 0; i < 3; i++)
   {
      inputData(p + i);
   }
   for (i = 0; i < 3; i++)
   {
      outputData(p + i);
   }
   // inputData(p);
   // outputData(p);
   return 0;
}
void inputData(PERSON *p)
{
   scanf("%s", p->name);
   scanf("%d", &p->age);
}
void outputData(PERSON *p)
{
   printf("%s, %d\n", p->name, p->age);
}