#include <stdio.h>

int main(void)
{
	int x, y;
	int max;

	printf("整数を2つ入力してください。\n");
	printf("1つ目 > ");
	scanf("%d", &x);
	printf("2つ目 > ");
	scanf("%d", &y);

	max = x >= y ? x : y;

	printf("大きい方は%dです。\n", max);

	return 0;
}
