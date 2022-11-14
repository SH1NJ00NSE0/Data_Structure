#include <stdio.h>

int input[10];

int main()
{
	int i, max = 0, maxIndex;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &input[i]);
	}
	for (i = 0; i < 9; i++)
	{
		if (input[i] > max)
		{
			max = input[i];
			maxIndex = i;
		}
	}
	printf("%d\n%d", max, maxIndex + 1);
	return 0;
}
