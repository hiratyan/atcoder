#include <stdio.h>

int main(void)
{
	int i = 0;

	/* 1から100のうち、3の倍数でも5の倍数でもない数を表示する */
	while (1)
	{
		++i;

		/* 100より大きくなったらwhile文を終了する */
		if (i > 100)
		{
			break;
		}

		/* 3または5の倍数なら以降を飛ばす */
		if (i % 3 == 0 || i % 5 == 0)
		{
			continue;
		}

		printf("%d ", i);
	}

	printf("\n");

	return 0;
}
