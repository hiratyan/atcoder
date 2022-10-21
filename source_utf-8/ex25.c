#include <stdio.h>

int main(void)
{
	int age;

	printf("年齢を入力してください > ");
	scanf("%d", &age);

	if (age >= 28 && age <= 32)
	{
		printf("あなたは30歳前後です。\n");
	}

	return 0;
}
