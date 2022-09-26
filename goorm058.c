#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
   char name[100];
   int price;
   bool limit;
} Goods;

int main()
{
   Goods *item1 = (Goods *)malloc(sizeof(Goods));
   strcpy(item1->name, "교향곡 전집");
   item1->price = 100000;
   item1->limit = false;
   Goods *ptr = (Goods *)malloc(sizeof(Goods));
   ptr->price = 100000;
   ptr->limit = true;
   if (ptr->limit == true)
      printf("한정판\n");
   else
      printf("일반판\n");

   free(item1);
   free(ptr);
   return 0;
}