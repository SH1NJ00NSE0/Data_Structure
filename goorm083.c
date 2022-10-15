#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct
{
	element *data;
	int front;
	int rear;
	int size;
} Queue;

Queue *initQueue(int n)
{
	Queue *temp = (Queue *)malloc(sizeof(Queue));
	temp->size = n; // n을 크기로 하는 큐
	temp->rear = -1;
	temp->front = -1;
	temp->data = (element *)malloc(sizeof(element)); // 크기 n 을 가지는 동적 배열 생성
	return temp;
}

int isFull(Queue *q)
{
	// 큐가 가득 차 있다면 rear 은 어떤 상태일까?
	return q->rear == q->size - 1;
}

int isEmpty(Queue *q)
{
	return q->front == q->rear;
	// 큐가 비어 있따면 rear과 front 는 어떤 상태일까?
}

void enQueue(Queue *q, element data)
{
	if (isFull(q))
	{
		printf("Queue is full\n");
	}
	else
	{
		q->rear += 1;
		*(q->data + q->rear) = data;
	}
	// 가득 차 있다면 "Queue is full"이라고 출력
	// 아니면 rear에 data 삽입
}

element deQueue(Queue *q)
{
	if (isEmpty(q))
	{
		printf("Queue is empty\n");
		return 0;
	}
	q->front += 1;
	return *(q->data + q->front);
	// 비어 있다면 "Queue is empty" 출력하고 0 리턴
	// 아니면 front위치의 데이터 리턴
}

void printAll(Queue *q)
{
	for (int i = 0; i < q->size; i++)
	{
		if (i > q->front && i <= q->rear)
			printf("%d | ", *(q->data + i));
		else
			printf("   | ");
	}
	printf("\n");
	// 0 부터 배열크기-1 에서  front+1 ~rear사이의 데이터만 출력
}

void destroyQueue(Queue *q)
{
	free(q->data);
	free(q);
	// data 동적 메모리 해제
	// q 동적 메모리 해제
}

int main()
{
	Queue *q;
	element data;
	q = initQueue(5);
	enQueue(q, 10);
	printAll(q);
	enQueue(q, 20);
	printAll(q);
	enQueue(q, 30);
	printAll(q);
	enQueue(q, 40);
	printAll(q);
	enQueue(q, 50);
	printAll(q);
	data = deQueue(q);
	printAll(q);
	enQueue(q, 60);
	printAll(q);

	destroyQueue(q);
	return 0;
}
