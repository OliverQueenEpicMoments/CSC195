#pragma once
#include <iostream>
using namespace std;

class Employee {
public:
	void Read();
	void Write();

private:
	string Name;
	unsigned short Age;
	unsigned int ZipCode;
	float Wage;
	short HoursWorked;
	static const float Tax;
};