#include <stdio.h>

int main(void)
{
	int a, b;

	printf("整数1 > ");
	scanf("%d", &a);
	printf("整数2 > ");
	scanf("%d", &b);

	printf("%d + %d は %d\n", a, b, a + b);
	printf("%d - %d は %d\n", a, b, a - b);
	printf("%d * %d は %d\n", a, b, a * b);
	printf("%d / %d は %d\n", a, b, a / b);
	printf("%d %% %d は %d\n", a, b, a % b); /* 文字列リテラル中の % に注意 */

	return 0;
}
