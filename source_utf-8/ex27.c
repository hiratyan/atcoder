#include <stdio.h>

int main(void)
{
	int age;

	printf("年齢を入力してください > ");
	scanf("%d", &age);

	if (!(age < 20))
	{
		printf("あなたは飲酒できます。\n");
	}

	return 0;
}
