#include <stdio.h>

int main(void)
{
	char initial;
	int age;

	scanf("%c", &initial);
	scanf("%d", &age);

	printf("%cさんの年齢は%d歳です。\n", initial, age);

	return 0;
}
