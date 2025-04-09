// C programming for beginners
// Section 5.41
// Create a program that defines an enum type & uses
// that type to display the values of some variables
#include <stdio.h>

int main(void)
{
	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
	enum Company company1 = XEROX;
	enum Company company2 = GOOGLE;
	enum Company company3 = EBAY;

	printf("%d\n%d\n%d\n", company1, company2, company3);

	return 0;
}
