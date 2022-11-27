#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Node
{
	int data;
	struct Node *next;
} Node;

void printList(Node *head)
{
	Node *p = head;
	while (p != 0)
	{
		if (p->next != NULL)
			printf("%d->", p->data);
		else
			printf("%d", p->data);
		p = p->next;
	}
	printf("\n");
}
Node *reverse(Node *head)
{
	Node *p, *q, *r;
	p = head;
	q = NULL;
	r = NULL;
	while (p != 0)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	return q;
}
Node *insertFirst(Node *head, int data)
{
	Node *newnode;
	newnode = (Node *)malloc(sizeof(Node));
	newnode->next = NULL;
	newnode->data = data;
	head = newnode;
	return head;
}

Node *insert(Node *head, int data)
{
	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = head;
	head = newnode;
	return head;
}
int main()
{
	Node *head = NULL;
	head = insertFirst(head, 10);
	printList(head);
	for (int i = 20; i <= 50; i += 10)
	{
		head = insert(head, i);
		printList(head);
	}
	head = reverse(head);
	printf("역순으로 출력\n");
	printList(head);
	return 0;
}