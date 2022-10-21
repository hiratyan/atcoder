#include <stdio.h>

double expo(double x, int y)
{
	double e;

	/* 1にxをy回かける */
	for (e = 1 ; y > 0; --y)
	{
		e *= x;
	}

	return e;
}

int main(void)
{
	printf("-2.7の3乗は %f です。\n", expo(-2.7, 3));
	printf("1.8の4乗は %f です。\n", expo(1.8, 4));

	return 0;
}
