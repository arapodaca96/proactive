#include <stdio.h>

int main() {
	
	printf("Enter base wage: $");
	fflush(stdout);
	double wage = 0.0;
	scanf("%lf", &wage);

	printf("Enter hours worked per week: ");
	fflush(stdout);
	double hr_per_week = 0.0;
	scanf("%lf", &hr_per_week);

	if (hr_per_week > 40.0) {
		printf("\t-- Overtime: %.2lf hours\n", hr_per_week - 40);
	}

	// -------------------

	double grossPay = 0.0;
	if (hr_per_week > 40.0) {
		grossPay = (40 * wage) + (1.5 * (hr_per_week - 40) * wage);
	}
	else {
		grossPay = (hr_per_week * wage);
	}
	printf("\nGross Pay: $%.2lf\n", grossPay);

	// -------------------

	double taxes = 0.0;
	if (grossPay > 0.00   &&   grossPay <= 186.53) {
		taxes = grossPay * 0.10;
	}
	else if (grossPay > 186.53   &&   grossPay<= 759.13) {
		taxes = (186.53 * 0.10) + ((grossPay - 186.53) * 0.12);
	}
	else {
		taxes = (186.53 * 0.10) + (572.60 * 0.12) + ((grossPay - 759.13) * 0.22);
	}

	// -------------------

	printf("Taxes: $%.2lf\n", taxes);
	printf("Net pay: $%.2lf\n", grossPay - taxes);

	return 0;
}
