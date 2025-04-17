// Program displays the byte size of various data types
// that are supported in c
// int, char, long, long long, double, long double
// use %zd format specifier
#include <stdio.h>

int main(void)
{
	printf("sizeof(int):\t\t%zd\n", sizeof(int));
	printf("sizeof(char):\t\t%zd\n", sizeof(char));
	printf("sizeof(long):\t\t%zd\n", sizeof(long));
	printf("sizeof(long long):\t%zd\n", sizeof(long long));
	printf("sizeof(double):\t\t%zd\n", sizeof(double));
	printf("sizeof(long double:\t%zd\n", sizeof(long double));

	return 0;
}
