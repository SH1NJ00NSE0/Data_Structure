#include <stdio.h>

int main()
{
	int a = 5, b, *c;
	c = &a;
	b = ++*c;
	printf("%d", b);
	return 0;
}