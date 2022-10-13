#include <stdio.h>

int main()
{
	char s[10], a;
	int i = 0, p = -1;
	scanf("%s\n%c", s, &a);
	while (s[i] != '\0')
	{
		if (s[i] == a)
		{
			p = i;
			break;
		}
		i++;
	}
	if (p != -1)
		printf("%d번째\n", p + 1);
	else
		printf("not found\n");
	return 0;
}