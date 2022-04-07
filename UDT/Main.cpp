#include "Employee.h"
#include <iostream>
using namespace std;

int main() {
	string Employees[5];
	short NumEmployees;
	cout << "Number of employees: ";
	cin >> NumEmployees;

	for (int I = 0; I < NumEmployees; I++) {
		Employee employee;
		employee.Read();
		employee.Write();
	}
};