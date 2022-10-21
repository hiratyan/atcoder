#include <stdio.h>

int plus5(int);

int main(void)
{
	int i;

	printf("整数を入力してください > ");
	scanf("%d", &i);

	printf("%d に 5 を足すと %d です。\n", i, plus5(i));

	return 0;
}

int plus5(int n)
{

	/* 引数に5を足して返却する処理を記述 */

}
