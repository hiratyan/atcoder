#include <math.h>
#include <stdio.h>

int main(void)
{
	double x;

	printf("非負の数を入力してください > ");
	scanf("%lf", &x);

	printf("%f の平方根は %f です。\n", x, sqrt(x));

	return 0;
}
