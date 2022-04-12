#include "Employee.h"
#include <iostream>
using namespace std;

int main() {
	Employee Employees[5];
	short NumEmployees;
	cout << "Number of employees: ";
	cin >> NumEmployees;

	for (int I = 0; I < NumEmployees; I++) {
		Employees[I].Read();
	}

	for (int I = 0; I < NumEmployees; I++) {
		Employees[I].Write();
	}
};