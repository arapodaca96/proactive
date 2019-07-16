#include <stdio.h>

int GCD(int, int);
double absoluteValue(double);
double squareRoot(double);

int main () {

	int x = 83;
	int y = 240;

	double z = 0;

	double w = 69.0;

	printf("GCD of %d and %d is %d\n", x, y, GCD(x, y));
	printf("Absolute value of %.2lf is %.2lf\n", z, absoluteValue(z));
	printf("Square root of %.2lf is %.2lf\n", w, squareRoot(w));


	return 0;
}

int GCD(int x, int y) {

	if (x == 0) {
		return y;
	}

	if (y == 0) {
		return x;
	}

    if (x == y) {
    	return x;
    }

    if (x > y) {
    	return GCD(x-y, y);
    }

	return GCD(x, y-x);
}

double absoluteValue(double x) {

	if (x >= 0) {
		return x;
	}

	else {
		return -x;
	}
}

double squareRoot(double n) {

	double x = n;
	double y = 1;
	double e = 0.000001; 
	
	while (x - y > e) {
	    x = (x + y) / 2;
	    y = n / x;
	}

	return x;
}

