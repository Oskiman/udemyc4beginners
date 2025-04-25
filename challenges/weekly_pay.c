// Program to calculate weekly pay
// Ask for number of hours worked
// Display gross, taxes, net
// Basic rate 12.00 per hour
// Overtime > 40 hours per week, time and a half (18.00)
// Tax rate: 	15% of first 300
// 		20% of next 150
// 		25% of rest
//
#include <stdio.h>

int main(void)
{
	int num_hours = 0;
	float gross, taxes, net;
	const float BASIC_RATE = 12.00;
	const float OVERTIME = 40;
	const float OTPAY = 18.00;
	const float TAXRATE_1 = 0.15;
	const float TAXRATE_2 = 0.20;
	const float TAXRATE_3 = 0.25;
	const float TAX_300 = 300;
	const float TAX_450 = 450;

	printf("Enter hours worked: ");
	scanf("%d", &num_hours);

	if(num_hours <= OVERTIME)
	{
		gross = num_hours * BASIC_RATE;
	}
	else
	{
		gross = (OVERTIME * BASIC_RATE) + ((hours_worked - OVERTIME) * OTPAY);
	}

	if(gross < TAX300)
	{
		tax = gross * TAX300;
		net = gross - tax;
	}
	else if(gross > TAX300 && gross < TAX450)
	{
		//tax 15% of first 300
		//tax 20% of 300 - 450
		tax = ((gross - TAX300 * TAXRATE_2) + (TAX300 * TAXRATE_1)); 
	}
	else if(gross > TAX450)
	{
		//tax 15% of first 300
		//tax 20% of 300 - 450
		//tax 25% above 450
		tax = (((gross - TAX450 * TAXRATE_3) + (gross - TAX300 * TAXRATE_2) + (TAX300 * TAXRATE_1));
	}

	printf("Gross pay: %d\n", gross);
	printf("Taxes paid: %d\n", tax);
	printf("Net pay: %d\n", net);


	return 0;
}
