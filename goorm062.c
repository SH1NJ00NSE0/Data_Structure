#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct Node
{ // 노드 타입
	element data;
	struct Node *next;
} Node;

Node *insertFirst(Node *head, int value)
{
	Node *node = (Node *)malloc(sizeof(Node)); //(1)동적할당
	node->data = value;								 // (2) 값저장
	node->next = head;								 // 헤드 포인터의 값을 복사	//(3)
	head = node;										 // 헤드 포인터 변경		//(4)
	return head;										 // 변경된 헤드 포인터 반환
}

int getSum(Node *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->data;
		head = head->next;
	}
	return sum;
	// 노드의 데이터를 더하는 코드 작성
}

int main(void)
{
	Node *head = NULL; //;NULL로 초기화
	int count, data;

	printf("노드의 개수; ");
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
	{
		printf("노드 #%d 데이터: ", i);
		scanf("%d", &data);
		head = insertFirst(head, data);
		// head 에 insertFirst실행결과 저장
	}
	printf("연결 리스트 데이터의 합 : %d \n ", getSum(head));
	return 0;
}