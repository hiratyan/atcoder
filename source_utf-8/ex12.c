#include <stdio.h>

int main(void)
{
	char initial;
	int age;
	double height;

	printf("名字の頭文字を入力してください > ");
	scanf("%c", &initial);
	printf("年齢を入力してください > ");
	scanf("%d", &age);
	printf("身長を入力してください > ");
	scanf("%lf", &height);

	printf("%cさんの年齢は%d歳、身長は%.1fcmです。\n", initial, age, height);

	return 0;
}
