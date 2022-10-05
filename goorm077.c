#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 20

typedef char element;

typedef struct
{
   int top;
   element data[STACK_SIZE];
} Stack;

void initStack(Stack *s)
{
   s->top = -1;
}
int isFull(Stack *s)
{
   return (s->top == STACK_SIZE - 1);
}
int isEmpty(Stack *s)
{
   return s->top == -1;
}
void push(Stack *s, element c)
{
   if (isFull(s))
   {
      printf("stack is full\n");
      return;
   }
   s->data[++s->top] = c;
}
element pop(Stack *s)
{

   if (isFull(s))
   {
      printf("stack is empty\n");
      exit(0);
   }
   return s->data[s->top--];
}

int main()
{
   int i;
   Stack s;
   char str[20];
   printf("문자열 입력 : ");
   scanf("%s", str);
   for (i = 0; str[i] != '\0'; i++)
      push(&s, str[i]);
   for (i = 0; str[i] != '\0'; i++)
      printf("%c", pop(&s));
}
