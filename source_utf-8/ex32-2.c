#include <stdio.h>

int main(void)
{
	int a, b, c;
	int max, min;

	printf("整数を3つ入力してください。\n");
	printf("1つ目 > ");
	scanf("%d", &a);
	printf("2つ目 > ");
	scanf("%d", &b);
	printf("3つ目 > ");
	scanf("%d", &c);

	/* 最大値 */
	max = a;
	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}

	/* 最小値 */
	min = a;
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}

	printf("\n最大値: %d\n最小値: %d\n", max, min);

	return 0;
}
