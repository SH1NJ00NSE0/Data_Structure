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

void queueInit(QueueType *q)
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

// 삽입함수
void enqueue(QueueType *q, element item)
{
	if (isFull(q))
	{
		printf("큐가 포화상태입니다");
		return;
	}
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->queue[q->rear] = item;
}

// 삭제함수
element dequeue(QueueType *q)
{
	if (isEmpty(q))
	{
		printf("큐가 공백상태입니다.");
		return;
	}
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->queue[q->front];
}

#define MAX_VERTICES 50
typedef struct GraphType
{
	int n;
	int adj_mat[MAX_VERTICES][MAX_VERTICES];
} GraphType;
int visited[MAX_VERTICES];

// 그래프 초기화
void graphInit(GraphType *g)
{
	int r, c;
	g->n = 0;
	for (r = 0; r < MAX_VERTICES; r++)
		for (c = 0; c < MAX_VERTICES; c++)
			g->adj_mat[r][c] = 0;
}

// 정점 삽입 연산
void insertVertex(GraphType *g, int v)
{
	if ((g->n) + 1 > MAX_VERTICES)
	{
		printf("그래프 : 정점의 개수 초과");
		return;
	}
	g->n++;
}

// 간선 삽입 연산
void insertEdge(GraphType *g, int start, int end)
{
	if (start >= g->n || end >= g->n)
	{
		printf("그래프 : 정점 번호 오류");
		return;
	}
	g->adj_mat[start][end] = 1;
	g->adj_mat[end][start] = 1;
}

void bfsMat(GraphType *g, int v)
{
	int w;
	QueueType q;

	queueInit(&q);
	visited[v] = TRUE;
	printf("%d 방문 -> ", v);
	enqueue(&q, v);
	while (!isEmpty(&q))
	{
		v = dequeue(&q);
		for (w = 0; w < g->n; w++)
			if (g->adj_mat[v][w] && !visited[w])
			{
				visited[w] = TRUE;
				printf("%d 방문 -> ", w);
				enqueue(&q, w);
			}
	}
}

int main()
{
	GraphType *g;
	g = (GraphType *)malloc(sizeof(GraphType));
	graphInit(g);
	for (int i = 0; i < 6; i++)
		insertVertex(g, i);
	insertEdge(g, 0, 2);
	insertEdge(g, 2, 1);
	insertEdge(g, 2, 3);
	insertEdge(g, 0, 4);
	insertEdge(g, 4, 5);
	insertEdge(g, 1, 5);

	printf("너비 우선 탐색\n");
	bfsMat(g, 0);
	printf("\n");
	free(g);
	return 0;
}