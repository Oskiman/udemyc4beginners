#include <stdio.h>

int main(int argc, char *argv[])
{
	int num_of_args = argc;
	char *argument1 = argv[0];
	char *argument2 = argv[1];

	printf("Number of arguments: %d\n", num_of_args);
	printf("Argument 1 is the program name: %s\n", argument1);
	printf("Argument 2 is the command line argument: %s\n", argument2);

	return 0;
}
