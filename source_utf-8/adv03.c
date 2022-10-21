#include <stdio.h>

int main(void)
{
	char c = 'A';
	char n = 65;

	if (c == n)
	{
		printf("c == n は真\n");
	}

	printf("cを文字として見ると %c、整数として見ると %d\n", c, c);

	printf("nを文字として見ると %c、整数として見ると %d\n", n, n);

	return 0;
}
