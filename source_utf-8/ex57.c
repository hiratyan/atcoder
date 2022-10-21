#include <stdio.h>

int is_prime(int);

int main(void)
{
	int n;

	printf("3以上の整数を入力してください > ");
	scanf("%d", &n);

	printf("%d は", n);
	if (is_prime(n))
	{
		printf("素数です。\n");
	}
	else
	{
		printf("素数ではありません。\n");
	}

	return 0;
}

/* ここに is_prime() 関数の定義を書く */
