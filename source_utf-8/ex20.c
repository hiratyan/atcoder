#include <stdio.h>

int main(void)
{
	int i;

	printf("正の整数を入力してください > ");
	scanf("%d", &i);

	if (i % 5)
		printf("%dは5で割り切れません。\n", i);

	return 0;
}
