#include <stdio.h>

int main()
{
	char s4[]={'A','B','C','D','\0'};
	char s1[10]="ABC";
	char s2[]="ABCD";
	char s5[]={'1','2','3'};
	char s3[]={'1','2','3','4'};

	printf("%p\n",s1);
	printf("%p\n",s2);
	printf("%p\n",s3);
	printf("%p\n",s4);
	printf("%p\n",s5);

	printf("\n");

	printf("%s\n",s1);
	printf("%s\n",s2);
	printf("%s\n",s3);
	printf("%s\n",s4);
	printf("%s\n",s5);
	return 0;
}