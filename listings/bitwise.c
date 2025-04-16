// bitwise operations
#include <stdio.h>

int main(void)
{
	unsigned int a = 60;	// 0011 1100
	unsigned int b = 13;	// 0000 1101
	int result = 0;
	printf("a: %d 0011 1100\nb: %d 0000 1101\n", a, b);
	result = a & b;		// 0000 1100
	printf("a&b: %d 0000 1100\n", result);

	return 0;
}
