#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 100
typedef int element; // int를 element로 재정의

typedef struct
{
   int top;
   element data[MAX_STACK_SIZE];
} Stack;

Stack s;

void initStack()
{
   s.top = -1;
}

bool isEmpty()
{
   if (s.top == -1)
      return true;
   else
      return false;
}

bool isFull()
{
   if (s.top == MAX_STACK_SIZE - 1)
      return true;
   else
      return false;
}

void push(element item)
{
   if (isFull())
      return;
   s.data[++s.top] = item;
}

element pop()
{ //반환후 제거
   if (isEmpty())
      exit(1);
   element temp;
   temp = s.data[s.top];
   s.top--;
   return temp;
}

element peek()
{ //반환만
   if (isEmpty())
      exit(1);
   return s.data[s.top];
}

int main()
{
   initStack();
   push(1);
   push(2);
   push(3);
   printf("%d\n", pop());
   printf("%d\n", peek());
   printf("%d\n", pop());
   return 0;
}