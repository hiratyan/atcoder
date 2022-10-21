#include <stdio.h>

void func(int);

int main(void)
{
	int n = 1;

	printf("(1) n = %d\n", n);

	func(n);

	printf("(4) n = %d\n", n);

	return 0;
}

void func(int n)
{
	printf("(2) n = %d\n", n);

	n = 2;

	printf("(3) n = %d\n", n);

	return;
}
