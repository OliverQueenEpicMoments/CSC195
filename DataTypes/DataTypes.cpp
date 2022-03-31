#include <iostream> 
using namespace std;

int main() {
	string Name;
	char Initial;
	short Age;
	bool IsAdult;
	int ZipCode;
	float Wage;
	short DaysWorked;
	short HoursWorkedPerday[7];

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
	int Gross = Totalhours * Wage;
	cout << "Gross income: $" << Gross << endl;
	int Net = Gross - (Gross * Tax);
	cout << "Net income: $" << Net << endl;
}
