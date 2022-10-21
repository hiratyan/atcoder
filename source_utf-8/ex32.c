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


	/*
	 * ここで、
	 *   (1) a、b、c の最大値を max に代入
	 *   (2) a、b、c の最小値を min に代入
	 */


	printf("\n最大値: %d\n最小値: %d\n", max, min);

	return 0;
}
