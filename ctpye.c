#include <stdio.h>
#include <ctype.h>

int main()
{
	int c;
	scanf("%c", &c);
	printf("isalnum  : %8d\n", isalnum(c));
	printf("isalpha  : %8d\n", isalpha(c));
	printf("iscntrl  : %8d\n", iscntrl(c));
	printf("isdigit  : %8d\n", isdigit(c));
	printf("isgraph  : %8d\n", isgraph(c));
	printf("islower  : %8d\n", islower(c));
	printf("isprint  : %8d\n", isprint(c));
	printf("ispunct  : %8d\n", ispunct(c));
	printf("isspace  : %8d\n", isspace(c));
	printf("isupper  : %8d\n", isupper(c));
	printf("isxdigit : %8d\n", isxdigit(c));
	printf("tolower  : %8d\n", tolower(c));
	printf("toupper  : %8d\n", toupper(c));
	printf("toascii  : %8d\n", __toascii(c));
	return 0;
}