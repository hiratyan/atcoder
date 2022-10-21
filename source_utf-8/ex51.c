#include <ctype.h>
#include <stdio.h>

int main(void)
{
	char c;

	printf("文字を入力してください > ");
	scanf("%c", &c);

	printf("%c を大文字にすると %c です。\n", c, toupper(c));

	return 0;
}
