// 동적으로 구조체 생성하기
#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node
{
	element data;
	struct Node *next;
} Node;
// 1)Node 구조체를 전역에 정의
int main()
{
	Node *n1, *n2, *n3, *head;
	n1 =		// Node구조체 n1 동적할당
		 n2 = // Node구조체 n2 동적할당
		 n3 = // Node구조체 n3 동적할당
		 // 2) n1의 데이터에 10을 저장
		 // 3) n1의 다음 노드 주소 next에 n2를 저장
		 // 4) n2의 데이터에 20을 저장
		 // 5)n2의 다음 노드 주소 next에 n3 저장
		 // 6) n3의 데이터에 30을 저장
		 // 7) n3의 다음 노드 주소 next에 NULL 저장
		 head = // 8)n1의 주소 저장(참조)
		 while (head)
	{
		printf("%d->", head->data);
		// 9) head에 다음 노드 주소 저장
	}
}