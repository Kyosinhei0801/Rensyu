#include<stdio.h>

void main()
{
	char a[] = "ABCDE";
	char b[] = "XYZ";
	char c[16];
	int n = 123;

	sprintf(c, "%s%d%s", a, n, b);

	printf("%s\n", c);
}