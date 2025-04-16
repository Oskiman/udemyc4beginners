// bitwise operations
#include <stdio.h>

int main(void)
{
	unsigned int a = 60;	// 0011 1100
	unsigned int b = 13;	// 0000 1101
	int result = 0;
	printf("a: \t%d 0011 1100\nb: \t%d 0000 1101\n", a, b);

	result = a & b;		// 0000 1100
	printf("a & b: %d 0000 1100\n", result);
	
	result = a | b;		// 0011 1101
	printf("a | b: %d 0011 1101\n", result);

	result = a ^ b;		// 0011 0001
	printf("a ^ b: %d 0011 0001\n", result);

	return 0;
}
