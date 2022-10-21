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
		price *= 1.05;
	}
	else
	{
		price *= 1.1;
	}

	printf("\n税込み価格は%.0f円です。\n", price);

	return 0;
}
