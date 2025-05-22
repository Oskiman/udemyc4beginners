// Program to find all prime numbers from 3 - 100
// Output each prime separated by a space on a single line
// Create an array to store primes
// Hard code 2 & 3 in the array
#include <stdio.h>

int main(void)
{
	const int SIZE = 25;	// lazy here, I altered SIZE after running code, was initially set to 50
	int primes[SIZE];
	int count = 0;
	int end = 100;
	// hardcode 2 & 3 as first 2 primes
	primes[0] = 2;
	primes[1] = 3;
	int element = 2;	// so we start at correct array element
	
	for(int i = 4; i <= end; i++)	// start at 4 as 2 & 3 are hard coded
	{
		count = 0;
		for(int j = 2; j <= i / 2; j++)
			if(i % j == 0)
			{
				count++;
				break;
			}
	

		if(count == 0 && i != 1)
		{
			primes[element] = i;
			element++;
		}
	}

	// output primes
	for(int i = 0; i < SIZE; i++)
		printf("%d ", primes[i]);

	printf("\n");

	return 0;
}
