// Enter basic salary of an employee and calculate Gross salary according to
// given conditions:
// - Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic
// - Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic
// - Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic#include
#include <iostream>
using namespace std;

int main()
{
	float basicSalary, hra, da, gross;

	cout << "Enter basic salary: ";
	cin >> basicSalary;

	if (basicSalary >= 30000)
	{
		hra = 0.30 * basicSalary;
		da = 0.95 * basicSalary;
	}
	else if (basicSalary >= 20000)
	{
		hra = 0.25 * basicSalary;
		da = 0.90 * basicSalary;
	}
	else if (basicSalary >= 10000)
	{
		hra = 0.20 * basicSalary;
		da = 0.80 * basicSalary;
	}
	else
	{
		hra = 0;
		da = 0;
		cout << "Basic salary below 10000, no HRA or DA applied." << endl;
	}
	gross = basicSalary + hra + da;
	cout << "Gross Salary = " << gross << endl;
	return 0;
}
