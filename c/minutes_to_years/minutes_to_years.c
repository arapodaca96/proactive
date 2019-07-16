#include <stdio.h>

int main() {

	int minutesEntered = 0;
	double years = 0.0;
	double days = 0.0;
	double minutesInYear = 0.0;
	double minutesInDay = 0.0;

	printf("Please enter the number of minutes: ");
	fflush(stdout);
	scanf("%d", &minutesEntered);

	minutesInYear = (60 * 24 * 365);
	minutesInDay = (60 * 24);

	years = minutesEntered / (int)minutesInYear;
	days = (minutesEntered - ((int)years * (int)minutesInYear)) / minutesInDay;

	printf("Minutes: %d\n", minutesEntered);
	printf("Number of years: %f\n", years);
	printf("Number of days: %f", days);
	fflush(stdout);

	return 0;
}
