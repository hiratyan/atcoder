#include <stdio.h>

int main(void)
{
	double price;
	int year;

	printf("税抜き価格 > ");
	scanf("%lf", &price);
	printf("年度 > ");
	scanf("%d", &year);

	if (year <= 2019)
	{
		/* 【複合代入演算子を使って】priceの値を1.05倍する */

	}
	else
	{
		/* 【複合代入演算子を使って】priceの値を1.1倍する */

	}

	printf("\n税込み価格は%.0f円です。\n", price);

	return 0;
}
