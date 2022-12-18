#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct StackNode
{
	element data;
	struct StackNode *next;
} StackNode; // 1) 노드의 구조체 정의

typedef struct
{
	StackNode *top;
} SList; // 2) 스택리스트의 시작 구조체 정의

void init(SList *s)
{
	s->top = NULL;
}
int isEmpty(SList *s)
{
	return (s->top == NULL);
}
int isFull(SList *s)
{
	return 0;
}
void push(SList *s, element data)
{
	StackNode *node = (StackNode *)malloc(sizeof(StackNode)); // 동적할당;
	node->data = data;
	node->next = s->top;
	s->top = node;
}
void pop(SList *s)
{
	if (isEmpty(s))
	{
		printf("Stack is Empty\n");
	}
	else
	{
		StackNode *temp = s->top;
		int data = temp->data;
		s->top = s->top->next;
		free(temp);
	}
}
void printList(SList *s)
{
	StackNode *p = s->top;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}
	printf("NULL\n");
}
int main()
{
	SList s;
	init(&s);
	push(&s, 1);
	printList(&s);
	push(&s, 2);
	printList(&s);
	push(&s, 3);
	printList(&s);
	pop(&s);
	printList(&s);
	pop(&s);
	printList(&s);
	pop(&s);
	printList(&s);
	return 0;
}