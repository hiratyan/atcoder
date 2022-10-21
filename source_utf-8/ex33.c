#include <stdio.h>

int main(void)
{
	int score;
	char grade;

	printf("得点を入力してください(0-100) > ");
	scanf("%d", &score);


	/*
	 * gradeに次の文字を代入する
	 *   scoreが90以上 … 'S'
	 *   scoreが80〜89 … 'A'
	 *   socreが70〜79 … 'B'
	 *   scoreが60〜69 … 'C'
	 *   scoreが60未満 … 'D'
	 */


	printf("あなたの成績は %c です。\n", grade);

	return 0;
}
