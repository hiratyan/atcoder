#include <stdio.h>

int main(void)
{
	double price;
	int year;

	printf("税抜き価格 > ");
	scanf("%lf", &price);
	printf("年度 > ");
	scanf("%d", &year);

	/* priceを1.05倍、または1.1倍する処理を、条件演算子を使って【1文】で書く */


	printf("\n税込み価格は%.0f円です。\n", price);

	return 0;
}
