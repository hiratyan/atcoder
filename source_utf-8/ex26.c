#include <stdio.h>

int main(void)
{
	int height;
	int age;

	printf("身長を入力してください > ");
	scanf("%d", &height);
	printf("年齢を入力してください > ");
	scanf("%d", &age);

	if (height < 120 || age <= 6)
	{
		printf("あなたはこのジェットコースターに乗れません。\n");
	}

	return 0;
}
