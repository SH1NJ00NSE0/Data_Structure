#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, i;
	char *str = (char *)malloc(100);
	scanf("%s", str);
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
		printf("%c", str + i);
	// *(str + b) = '\0';
	// printf("%s", str + a - 1);
	return 0;
}
