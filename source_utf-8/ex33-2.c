#include <stdio.h>

int main(void)
{
	int score;
	char grade;

	printf("得点を入力してください(0-100) > ");
	scanf("%d", &score);

	if (score >= 90)
	{
		grade = 'S';
	}
	else if (score >= 80)
	{
		grade = 'A';
	}
	else if (score >= 70)
	{
		grade = 'B';
	}
	else if (score >= 60)
	{
		grade = 'C';
	}
	else
	{
		grade = 'D';
	}

	printf("あなたの成績は %c です。\n", grade);

	return 0;
}
