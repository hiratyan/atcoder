#include <limits.h>
#include <stdio.h>

int main(void)
{
	printf("char型の範囲: %d 〜 %d\n", CHAR_MIN, CHAR_MAX);
	printf("int型の範囲: %d 〜 %d\n", INT_MIN, INT_MAX);
	printf("long int型の範囲: %ld 〜 %ld\n", LONG_MIN, LONG_MAX);

	return 0;
}
