#include <stdio.h>

int main(void)
{
	int day;

	printf("日を入力してください(1-31) > ");
	scanf("%d", &day);

	if (day % 10 == 5)
	{
		printf("%d日は特売日です。\n", day);
	}
	else
	{
		printf("%d日は特売日ではありません。\n", day);
	}

	return 0;
}
