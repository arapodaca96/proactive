#include <stdio.h>
#include <string.h>

	struct Employee {

		char *name;
		int hireDate;
		float salary;

	};

int main() {

	//declare and initialize instance of employee
	struct Employee e1 = {"Alejandro", 212, 50000.00};

	//read in second employee from console and store it in another instance
	struct Employee e2;
	printf("Enter name, hire date, and salary for second employee\n>> ");
	fflush(stdout);
	scanf("%s %d %f", e2.name, &e2.hireDate, &e2.salary);

	//print out contents of each employee
	printf("Employee 1: \n");
	printf("\tName: %s\n", e1.name);
	printf("\tHire Date: %d\n", e1.hireDate);
	printf("\tSalary: $%.2f\n\n", e1.salary);

	printf("Employee 2: \n");
	printf("\tName: %s\n", e2.name);
	printf("\tHire Date: %d\n", e2.hireDate);
	printf("\tSalary: $%.2f\n\n", e2.salary);

	return 0;
}

