#include <stdio.h>

int main()
{
	int a = 10, *b;
	b = &a; // 10
	for (int i = 0; i < 5; i++)
		*b += i; // 10+0+1+2+3+4=20
	printf("%d", *b);
	return 0;
}