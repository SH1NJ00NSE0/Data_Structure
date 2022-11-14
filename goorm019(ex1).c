#include <stdio.h>
size_t myStrlen(const char *str); // typedef unsigned int size_t;
int main(void)
{
	char s[] = "hello";
	printf("%d\n", myStrlen(s));
	return 0;
}
size_t myStrlen(const char *str)
{
	char *s;
	for (s = str; *s; s++)
	{
		printf("%8X\n", s);
	}
	printf("%8X\n", s);
	printf("s= %8X, str =%8X \n", s, str);

	return s - str;
}