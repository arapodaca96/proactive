#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

	srand(time(NULL));

	double rainfall[5][12];

	// Initialize 2-D rainfall array with random values from 0.0 to 10.0
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 12; j++) {
			rainfall[i][j] = (double)rand() / 3500;
			printf("%.1lf  ", rainfall[i][j]);
		}
		printf("\n");
	}

	double yearAvg[5];
	double monthAvg[12];

	double yearSum = 0.0;
	double monthSum = 0.0;

	// Calculate average rainfall per year
	for (int i = 0; i < 5; i++) {
		yearSum = 0.0;

		for (int j = 0; j < 12; j++) {
			yearSum += rainfall[i][j];
		}

		yearAvg[i] = yearSum / 12;
	}

	// Calculate average rainfall per month
	for (int j = 0; j < 12; j++) {
		monthSum = 0.0;

		for (int i = 0; i < 5; i++) {
			monthSum += rainfall[i][j];
		}

		monthAvg[j] = monthSum / 5;
	}

	printf("\nYearly averages: ");
	for (int i = 0; i < 5; i++) {
		printf("%.1lf, ", yearAvg[i]);
	}

	printf("\nMonthly averages: ");
	for (int i = 0; i < 12; i++) {
		printf("%.1lf, ", monthAvg[i]);
	}

	return 0;
}
