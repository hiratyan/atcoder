#include <stdio.h>

int myabs(int);

int main(void)
{
	int i;

	printf("整数を入力してください > ");
	scanf("%d", &i);

	printf("%d の絶対値は %d です。\n", i, myabs(i));

	return 0;
}

int myabs(int j)
{
	int k;

	if (j >= 0)
	{
		k = j;
	}
	else
	{
		k = -j;
	}

	return k;
}

/*
 * 参考: 条件演算子を使えば、次のようにもっと簡単に書けます
 *
 * int myabs(int j)
 * {
 *     return j >= 0 ? j : -j;
 * }
 *
 */
