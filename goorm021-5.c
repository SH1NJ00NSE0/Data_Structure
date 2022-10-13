#include <stdio.h>

int main()
{
	int a = 31, b, *c, *d;
	c = &a;								 // c=31
	d = &b;								 // ?
	*d = --*c % 3 ? a + a : a * a; // d=a*a=30*30=900
	printf("%d", *d);					 //900
	return 0;
}