#include <stdio.h>
#include <string.h>

int main()
{
	char s[10];
	int len, i, p = -1;
	scanf("%s", s);
	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == 'A')
		{
			p = i;
			break;
		}
	}
	if (p != -1)
		printf("%d번째\n", p + 1);
	else
		printf("not found\n");

	return 0;
}