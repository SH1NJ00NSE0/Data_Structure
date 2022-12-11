#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>

typedef struct element
{
	char word[100];
	char meaning[200];
} element;

typedef struct TreeNode
{
	element key;
	struct TreeNode *left, *right;
} TreeNode;

int compare(element e1, element e2)
{
	return strcmp(e1.word, e2.word); // e1<e2:-1,==:0,>1
}

// 이진탐색트리 출력함수
void display(TreeNode *p)
{

}
// 이진탐색트리 탐색함수
TreeNode *search(TreeNode *root, element key)
{
	if (root == NULL)
		return NULL;
	if (key.word == root->key)
		return root;
	else if (key < node->key)
		return search(node->left, key);
	else
		return search(node->right, key);
}
TreeNode *new_node(element item)
{
}

TreeNode *insert_node(TreeNode *node, element key)
{
	// 트리가 공백이면 새로운 노드를 반환
}

// 순환적으로 트리를 내려가서 삽입
}
// 이진 탐색 트리와 키가 주어지면 키가 저장된 노드를 삭제하고 새로운 루트노드반환
TreeNode *delete_node(TreeNode *root, element key)
{
}
void preorder(TreeNode *root)
{
	if (root)
	{
	}
}
int main()
{
	char command;
	element e;
	TreeNode *root = NULL;
	TreeNode *tmp;
	do
	{
		printf("\n ****i: 입력, d: 삭제,s: 탐색,p: 출력,q:종료****:");
		command = getchar();
		getchar();
		switch (command)
		{
		case 'i':
			printf("단어:");
			// 단어 한줄 e.word에 입력받음
			printf("의미:");
			// 의미 한줄 e.meaning에 입력받음
			root = // 구조체변수 e입력하는 함수 실행
				 break;
		case 'd':
			printf("단어:");
			gets(e.word);
			root = // 삭제 함수 실행
				 break;
		case 's':
			printf("단어:");
			gets(e.word);
			tmp = // 탐색함수 실행
				 if (tmp != NULL)
			{
				printf("의미: %s\n", /**/);
			}
			break;
		case 'p':
			display(root);
			printf("\n");
			break;
		}
	} while (/*q를 입력하지 않을 동안 실행*/);

	return 0;
}
