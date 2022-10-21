#include <stdio.h>

int main(void)
{
	char p;

	printf("出身都道府県の頭文字を答えてください > ");
	scanf("%c", &p);

	if (p == 'e' || p == 'E')
	{
		printf("あなたは愛媛県出身ですね。\n");
	}

	if (p == 'w' || p == 'W')
	{
		printf("あなたは和歌山県出身ですね。\n");
	}

	return 0;
}
