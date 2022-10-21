#include <stdio.h>

int main(void)
{
	int i;

	printf("正の整数を入力してください > ");
	scanf("%d", &i);

	if (i % 2)
		printf("%dは奇数です。\n", i);
	else
		printf("%dは偶数です。\n", i);

	return 0;
}
