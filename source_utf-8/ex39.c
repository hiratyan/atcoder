#include <stdio.h>

int main(void)
{
	int n, i;

	printf("正の整数を入力してください > ");
	scanf("%d", &n);

	i = 1;

	while (i <= n)
	{
		printf("%d ", i);
		++i;
	}

	printf("\n");

	return 0;
}
