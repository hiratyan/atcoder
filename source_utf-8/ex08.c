#include <stdio.h>

int main(void)
{
	int score = 85;      /* 得点 */
	char grade = 'A';    /* 評語 */
	double pi = 3.14159; /* 円周率 */
	int chance = 30;     /* 降水確率 */

	printf("得点は%d点、評語は\"%c\"です。\n", score, grade);

	printf("円周率として%.2fか%.3fを使って計算してください。\n", pi, pi);

	printf("降水確率は%d%%です。\n", chance);

	return 0;
}
