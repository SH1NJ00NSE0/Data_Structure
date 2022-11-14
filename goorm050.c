#include <stdio.h>

#define MAX 300

typedef int element;

typedef struct
{
	element data[300];
	int top;
} Stack;

void initStack(Stack *s)
{
	s->top = -1;
}

int isEmpty(Stack *s)
{
	return s->top == -1;
}

int isFull(Stack *s)
{
	return s->top == MAX - 1;
}

void push(Stack *s, element c)
{
	if (isFull(s))
	{
		printf("FULL");
	}
	else
	{
		s->top++;
		s->data[s->top] = c;
	}
}

element pop(Stack *s)
{
	char Temp;
	if (isEmpty(s))
	{
		printf("EMPTY");
		return 0;
	}
	Temp = s->data[s->top];
	s->top--;
	return Temp;
}

void EraseSpace(char str[])
{
	int i, index = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\n')
		{
			if (index != i)
				str[index] = str[i];
			index++;
		}
	}
	str[index] = '\0';
}

int main()
{
	int i, a, b, res = 0;
	char expr[300] = {};
	Stack s;
	initStack(&s);
	fgets(expr, 300, stdin);
	EraseSpace(expr);

	while (expr[i] != '\0')
	{
		if (expr[i] - '0' >= 0 && expr[i] - '0' <= 9)
		{
			push(&s, expr[i] - '0');
		}
		else
		{
			b = pop(&s);
			a = pop(&s);
			switch (expr[i])
			{
			case '+':
				res = a + b;
				break;
			case '-':
				res = a - b;
				break;
			case '*':
				res = a * b;
				break;
			case '/':
				res = a / b;
				break;
			default:
				break;
			}
			push(&s, res);
		}
		i++;
	}

	// 여기에 코드 작성
	printf("%d", pop(&s));
	return 0;
}
