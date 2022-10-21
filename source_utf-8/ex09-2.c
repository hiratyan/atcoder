#include <stdio.h>

int main(void)
{
	char initial;
	int age;
	double height;

	initial = 'M';
	age = 42;
	height = 164.5;

	printf("%cさんの年齢は%d歳、身長は%.1fcmです。\n", initial, age, height);

	return 0;
}
