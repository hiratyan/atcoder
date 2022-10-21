#include <stdio.h>

int main(void)
{
	int i = 101; /* 最初の反復回で i を100にするため */

	/* 1から100のうち、3の倍数か5の倍数である数を、降順に表示する */
	while (1)
	{
		--i;

		/* 1より小さくなったらwhile文を終了する */
		if (i < 1)
		{
			break;
		}

		/* 3の倍数でも5の倍数でもなければ以降を飛ばす */
		if (i % 3 != 0 && i % 5 != 0)
		{
			continue;
		}

		printf("%d ", i);
	}

	printf("\n");

	return 0;
}
