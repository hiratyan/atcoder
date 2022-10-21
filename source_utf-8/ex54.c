#include <stdio.h>

/* 関数プロトタイプ宣言 */
int plus(int, int);

int main(void)
{
	int n1, n2;

	printf("整数 n1 > ");
	scanf("%d", &n1);
	printf("整数 n2 > ");
	scanf("%d", &n2);

	printf("n1 + n2 = %d\n", plus(n1, n2));

	return 0;
}

int plus(int a, int b)
{
	int c;

	c = a + b;

	return c;
}
