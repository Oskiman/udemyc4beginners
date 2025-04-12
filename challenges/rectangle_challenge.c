// Program to display perimeter and area of a rectangle
// Program should display height, width & perimeter variables in one statement
// program should display height, width & area variables in one statement
#include <stdio.h>

int main(void)
{
	double width = 10.0;
	double height = 10.0;
	double perimeter = 0.0;
	double area = 0.0;

	area = width * height;
	perimeter = (width + height) * 2;

	printf("Height: %.2f, Width: %.2f, Area: %.2f\n", height, width, area);
	printf("Height: %.2f, Width: %.2f, Perimeter: %.2f\n", height, width, perimeter);

	return 0;
}
