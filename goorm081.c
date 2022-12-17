#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
typedef struct TNode
{
	int data;
	struct Tnode *left;
	struct Tnode *right;
} TNode;

TNode *makeRootNode(char data, TNode *leftNode, TNode *rightNode)
{
	TNode *root = (TNode *)malloc(sizeof(TNode)); // 트리 노드 동적할당
	root->data = data;									 // 데이터
	root->left = leftNode;								 // 왼쪽노드 주소값
	root->right = rightNode;							 // 오른쪽 주소값
	return root;											 // 생성된 노드의 주소
}

void preorder(TNode *root)
{
	if (root != NULL)
	{
		printf("[%d] ", root->data);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(TNode *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("[%d] ", root->data);
		inorder(root->right);
	}
}

void postorder(TNode *root)
{
	if (root != NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("[%d] ", root->data);
	}
}

void main()
{
	int n, i;
	char a, b, c;
	TNode *list[30];
	// TNode *n1 = makeRootNode(1, NULL, NULL);
	// TNode *n2 = makeRootNode(4, n1, NULL);
	// TNode *n3 = makeRootNode(16, NULL, NULL);
	// TNode *n4 = makeRootNode(25, NULL, NULL);
	// TNode *n5 = makeRootNode(20, n3, n4);
	// TNode *n6 = makeRootNode(15, n2, n5);
	// TNode *root = n6; // root 노드 주소값 저장

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%c %c %c", &a, &b, &c);
		if (b == ".")
			b == NULL;
		if (c == ".")
			c == NULL;
		list[i] = makeRootNode(a, b, c);
	}
	TNode *root = list[0];

	inorder(root);
	printf("\n");

	preorder(root);
	printf("\n");

	postorder(root);
	printf("\n");

	for (i = 0; i < n; i++)
	{
		free(list[i]);
	}
}
