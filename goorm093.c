#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX_QUEUE_SIZE 10

typedef int element;
typedef struct
{
	element queue[MAX_QUEUE_SIZE];
	int front, rear;
} QueueType;

void queue_init(QueueType *q)
{
	q->front = q->rear = 0;
}

int isEmpty(QueueType *q)
{
	return (q->front == q->rear);
}

int isFull(QueueType *q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

//삽입함수
void enqueue(QueueType *q, element item)
{
	if(isFull(q))
	{
		printf("큐가 포화상태입니다");
		return;
	}
	q->rear = (q->rear+1)%MAX_QUEUE_SIZE;
	q->queue[q->rear] = item;
}

//삭제함수
element dequeue(QueueType *q)
{
	if(isEmpty(q))
	{
		printf("큐가 공백상태입니다.");
		return;
	}
	q->front = (q->front+1)%MAX_QUEUE_SIZE;
	return q->queue[q->front];
}

int main()
{

	return 0;
}