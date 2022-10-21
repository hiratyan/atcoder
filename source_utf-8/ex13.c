#include <stdio.h>

int main(void)
{
	int a, b;
	int sum; /* 加算の結果を代入する変数 */

	/* 変数aとbにキーボードから整数を入力 */
	printf("整数 a > ");
	scanf("%d", &a);
	printf("整数 b > ");
	scanf("%d", &b);

	/* 加算の結果を変数に代入 */
	sum = a + b;

	/* a + b と a - b の結果を表示 */
	printf("a + b の結果は %d、a - b の結果は %d です。\n", sum, a - b);

	return 0;
}
