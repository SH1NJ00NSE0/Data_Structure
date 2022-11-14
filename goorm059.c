#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct Node
{
	element data;
	struct Node *next;
} Node; // 1. 연결리스트 노드 구조체 정의하기

Node *insertFirst(Node *head, element data)
{
	Node *node = (Node *)malloc(sizeof(Node)); // 1) 새로운 노드 생성하고
	node->data = data;								 // 2) 값 저장
	node->next = head;								 // 2) 새로운 노드의 next에 head 값 저장
	head = node;										 // 3) 새 노드 주소를 head 값으로 저장
	return head;										 // 4) 리스트의 head값 반환
}

void insert(Node *head, Node *pre, element data)
{
	// 3. 중간위치(pre 다음 위치 )삽입
	Node *newnode = (Node *)malloc(sizeof(Node)); // 1) 새로운 노드 생성하고
	newnode->data = data;								 // 2) 값 저장
	newnode->next = pre->next;							 // 3) 새 노드 next값에 pre의 next값 저장
	pre->next = newnode;									 // 4) pre의 next에 새노드의 주소 저장
}

Node *deleteFirst(Node *head)
{
	if (head == NULL)
		return NULL;
	Node *removed = head;		 // 1) removed 노드에 헤드포인터의 주소를 저장
	Node *newhead = head->next; // 2) 헤드포인터를  헤드포인터->next 로 변경 저장
	free(removed);					 // 3) removed의 주소 반환
	return newhead;				 // 4) 변경된 헤드포인터 반환
}

void delete(Node *head, Node *pre)
{
	// 5.프리가 가리키는 다음 노드를 삭제
	Node *removed = pre->next; //
	pre->next = removed->next; // pre->next->next와 같은 주소
	free(removed);
}

void printList(Node *head)
{
	while (head != NULL)
	{
		printf("%d->", head->data);
		head = head->next;
	}
	printf("NULL\n");
}

int main()
{
	Node *head = NULL;
	Node *temp = NULL;

	printf("[첫 위치 삽입]\n");
	for (int i = 0; i < 5; i++)
	{
		head = insertFirst(head, i); // 7. 첫위치에 i 삽입
		printList(head);
		if (i == 2)
			temp = head; // 데이터가 2인 노드 주소 저장
	}
	printf("[중간위치 삽입]\n");
	insert(head, temp, 100); // 8. temp 다음 위치에 100 저장
	printList(head);
	printf("[중간위치 삭제]\n");
	delete (head, temp); // 9. temp 다음위치 노드 삭제
	printList(head);
	printf("[첫 위치 삭제]\n");
	for (int i = 0; i < 5; i++)
	{
		head = deleteFirst(head); // 10. 첫위치 노드 삭제
		printList(head);
	}
	return 0;
}
