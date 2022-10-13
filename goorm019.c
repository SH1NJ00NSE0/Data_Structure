#include <stdio.h>

int main()
{
	char alpha[6] = {'H', 'E', 'L', 'L', 'O', '!'};
	char c;
	int i;
	printf("찾고 싶은 문자:");
	scanf("%c", &c);
	for (i = 0; alpha[i] != '\0'; i++)
	{
		if (alpha[i] == c)
			printf("%d 번째\n", i + 1);
	}
	return 0;
}