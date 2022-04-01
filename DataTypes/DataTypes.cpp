#include <iostream> 
using namespace std;

int main() {
	string Name;
	char Initial;
	unsigned short Age;
	bool IsAdult;
	unsigned int ZipCode;
	float Wage;
	unsigned short DaysWorked;
	unsigned short HoursWorkedPerday[7];

	const float Tax = 0.1f;

	cout << "Enter first name: ";
	cin >> Name;
	cout << "Enter last name intial: ";
	cin >> Initial;
	cout << "Enter age: ";
	cin >> Age;
	if (Age >= 18) {
		IsAdult = true;
	} else {
		IsAdult = false;
	}

	cout << "Enter zip code: ";
	cin >> ZipCode;
	cout << "Enter wage: ";
	cin >> Wage;
	cout << "Enter days worked: ";
	cin >> DaysWorked;

	short Totalhours = 0;

	for (int I = 0; I < DaysWorked; I++) {
		cout << "Enter hours worked for day " << I + 1 << ": ";
		cin >> HoursWorkedPerday[I];
		Totalhours = Totalhours + HoursWorkedPerday[I];
	}

	cout << Name << " worked " << Totalhours << " hours at $" << Wage << " an hour." << endl;
	float Gross = Totalhours * Wage;
	cout << "Gross income: $" << Gross << endl;
	float Net = Gross - (Gross * Tax);
	cout << "Net income: $" << Net << endl;
}