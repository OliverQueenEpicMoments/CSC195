#include "Employee.h"

const float Employee::Tax = 0.01f;

void Employee::Read() {
	cout << "Enter name: ";
	cin >> Name;
	cout << "Enter age: ";
	cin >> Age;
	cout << "Enter zip code: ";
	cin >> ZipCode;
	cout << "Enter wage: ";
	cin >> Wage;
	cout << "Enter hours worked per week: ";
	cin >> HoursWorked;
}

void Employee::Write() {
	float WeekGross = HoursWorked * Wage;
	float WeekNet = WeekGross - (WeekGross * Tax);
	float YearGross = WeekGross * 52.4291;
	float YearNet = WeekNet * 52.1429;
	// There are 52.1429 weeks in a year

	cout << " " << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Zip code: " << ZipCode << endl;
	cout << "Wage: " << Wage << endl;
	cout << "Hours worked per week: " << HoursWorked << endl;
	cout << "Weekly gross pay: " << WeekGross << endl;
	cout << "Weekly net pay: " << WeekNet << endl;
	cout << "Yearly gross pay: " << YearGross << endl;
	cout << "Yearly net pay: " << YearNet << endl;
}