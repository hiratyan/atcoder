#include <stdio.h>

int main(void)
{
	int i;

	printf("正の整数を入力してください > ");
	scanf("%d", &i);

	if (i / 50)
		printf("%dは50以上です。\n", i);
	else
		printf("%dは50未満です。\n", i);

	return 0;
}
