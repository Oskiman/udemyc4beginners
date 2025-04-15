// Time conversion challenge
// Program converts a given amount of minutes to days & years
// Ask user for number of minutes
// Display output in minutes then days and years
#include <stdio.h>

int main(void)
{
	double minutes_in_year = 525600; // 60 * 24 * 365
	double minutes_in_day = 1440;	// 60 * 24
	double days = 0.0;
	double years = 0.0;
	int minutes = 0;

	printf("Enter an amount of minutes: ");
	scanf("%d", &minutes);

	printf("%d minutes is %lf days, or %lf years.\n", minutes, minutes / minutes_in_day, minutes / minutes_in_year); 

	return 0;
}
