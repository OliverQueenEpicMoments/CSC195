#include "Employee.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
	vector<Employee*> employees;
	short NumEmployees;
	cout << "Number of employees: ";
	cin >> NumEmployees;

	for (int I = 0; I < NumEmployees; I++) {
		Employee* employee = new Employee();
		employee->Read();
		employees.push_back(employee);
	}

	for (int I = 0; I < NumEmployees; I++) {
		employees[I]->Write();
	}

	for (auto employee : employees) {
		delete employee;
	}

	employees.clear();
};