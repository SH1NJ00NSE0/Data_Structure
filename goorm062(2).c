#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   char name[20];
   int grade;
   int class;
   float average;
} Student;

int main()
{
   Student *s1 = (Student *)malloc(1);

   scanf("%s", &s1->name);
   scanf("%d", &s1->grade);
   scanf("%d", &s1->class);
   scanf("%f", &s1->average);

   printf("이름: %s\n", s1->name);
   printf("학년: %d\n", s1->grade);
   printf("반: %d\n", s1->class);
   printf("평균점수: %f\n", s1->average);

   free(s1);
   return 0;
}