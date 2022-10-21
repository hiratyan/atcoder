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
