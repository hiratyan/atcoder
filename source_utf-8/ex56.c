#include <stdio.h>

/* ここに myabs() 関数の関数プロトタイプ宣言を書く */

int main(void)
{
	int i;

	printf("整数を入力してください > ");
	scanf("%d", &i);

	printf("%d の絶対値は %d です。\n", i, myabs(i));

	return 0;
}

/* ここに myabs() 関数の定義を書く */
