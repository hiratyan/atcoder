#include <stdio.h>

void func(int);

int main(void)
{
	int n = 1;

	{
		int n = 2;
		printf("%d\n", n);
		n = 3;
	}

	{
		printf("%d\n", n);
		n = 4;
	}

	printf("%d\n", n);

	func(n);

	printf("%d\n", n);

	return 0;
}

void func(int n)
{
	printf("%d\n", n);

	n = 5;

	printf("%d\n", n);

	return;
}
