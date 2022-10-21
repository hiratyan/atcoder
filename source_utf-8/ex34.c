#include <stdio.h>

int main(void)
{
	int height;
	int age;

	printf("身長を入力してください > ");
	scanf("%d", &height);
	printf("年齢を入力してください > ");
	scanf("%d", &age);

	if ( /* ここに制御式を書く */ )
	{
		printf("あなたはこのジェットコースターに乗れます。\n");
	}
	else
	{
		printf("あなたはこのジェットコースターに乗れません。\n");
	}

	return 0;
}
