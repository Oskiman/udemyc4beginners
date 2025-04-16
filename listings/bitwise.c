// bitwise operations
#include <stdio.h>

int main(void)
{
	unsigned int a = 60;	// 0011 1100
	unsigned int b = 13;	// 0000 1101
	int result = 0;
	printf("a: %d\nb: %d\n", a, b);
	result = a & b;
	printf("a&b: %d\n", result);

	return 0;
}
