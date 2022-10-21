#include <stdio.h>

#define CONSUMPTION_TAX_RATE 10

int main(void)
{
	double price;

	printf("税抜き価格 > ");
	scanf("%lf", &price);

	price *= 1 + (double)CONSUMPTION_TAX_RATE / 100;

	printf("税込み価格は%.0f円です。\n", price);

	return 0;
}
