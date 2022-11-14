#include <stdio.h>
int main()
{
	char *s = "world";
	int i;
	printf("%08X %08X %08X %s\n", &s, s, &s[0], s);
	for (i = 0; s[i] != '\0'; i++)
		printf("%08X %c\n", &s[i], s[i]);
	return 0;
}