#include <stdio.h>
#include <stdlib.h>
#define MAX_TERMS 100

typedef struct
{
   int row;
   int col;
   int value;
} element;

typedef struct
{
   element data[MAX_TERMS];
   int rows;
   int cols;
   int terms;
} Smatrix;

Smatrix matrixTrans2(Smatrix a)
{
   int i, j, bindex = 0; //행렬 b에서 현재 저장위치
   Smatrix b;
   b.terms = a.terms;
   b.rows = a.cols;
   b.cols = a.rows;
   for (i = 0; i < b.rows; i++)
   {
      for (j = 0; j < a.terms; j++)
      {
         if (i == a.data[j].col)
         {
            b.data[bindex].row = a.data[j].col;
            b.data[bindex].col = a.data[j].row;
            b.data[bindex].value = a.data[j].value;
            bindex++;
         }
      }
   }

   //희소행렬 (행,열,값)을 전치행렬 (열,행,값) 으로 변경하는 함수 작성
   return b;
}
void matrixPrint(Smatrix a)
{
   for (int i = 0; i < a.terms; i++)
      printf("(%d, %d, %d) \n", a.data[i].row, a.data[i].col, a.data[i].value);
   printf("---------------------\n");
}
int main(void)
{
   Smatrix m;
   Smatrix r;
   //행렬 정보 항개수,행개수,열개수 입력
   scanf("%d %d %d", &m.terms, &m.rows, &m.cols);
   for (int i = 0; i < m.terms; i++)
      scanf("%d %d %d", &m.data[i].row, &m.data[i].col, &m.data[i].value);
   matrixPrint(m);
   r = matrixTrans2(m);
   matrixPrint(r);
   return 0;
}
