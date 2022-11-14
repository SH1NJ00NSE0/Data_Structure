// 함수를 활용해 node 동적으로 생성하기
#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node
{
	element data;
	struct Node *next;
} Node;

Node *createNode(element data);
void printAll(Node *ptr);

int main()
{
	Node *head, *node1, *node2;
	head = createNode(12);
	node1 = createNode(99);
	node2 = createNode(37);
	head->next = node1;
	node1->next = node2;
	node2->next = NULL;
	printAll(head);
}

Node *createNode(element data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void printAll(Node *ptr)
{
	while (ptr)
	{
		if (ptr->next)
		{
			printf("%d", ptr->data);
			printf("->");
			ptr = ptr->next;
		}
		else
		{
			printf("%d", ptr->data);
			return; // 프린트 종료
		}
	}
}