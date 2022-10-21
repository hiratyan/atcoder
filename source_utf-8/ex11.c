#include <stdio.h>

int main(void)
{
	char initial;
	int age;

	printf("名字の頭文字を入力してください > ");
	scanf("%c", &initial);
	printf("年齢を入力してください > ");
	scanf("%d", &age);

	printf("%cさんの年齢は%d歳です。\n", initial, age);

	return 0;
}
