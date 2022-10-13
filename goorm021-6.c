#include <stdio.h>

int main()
{
	int a = 5, b = 7, c, *d;
	d = &c;
	*d = a & b; // 5 AND 7 => 0101 & 0111 => 0101
	printf("%d", c);
	return 0;
}