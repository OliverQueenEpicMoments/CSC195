# include <iostream>
using namespace std;

// I => 10
void F1(int I) {
	I = I + 5;
}

// I => Address
void F2(int* I) {
	*I = *I + 5;
}

void Swap(int* I1, int* I2) {
	cout << "Pointer" << endl;
	int Temp = *I1;
	*I1 = *I2;
	*I2 = Temp;
}

void Swap(int& I1, int& I2) {
	cout << "" << endl;
	int Temp = I1;
	I1 = I2;
	I2 = Temp;
}

int main() {
	int I = 10;
	int J = 23;

	// Ever changing
	int* P = nullptr; // Pointer (Points to a variable)
	P = &I;
	P = &J;

	// Permanently joined
	int& R = J; // Reference (Alias to a variable)
	R = I; // Assign value of I to R(J)

	cout << &J << endl;
	cout << &R << endl;
	cout << &P << endl;

	R = 5; // I = 5

	//F1(I);
	//F2(P); // Or F2(&I);

	cout << I << endl;
	cout << *P << endl;

	//Swap(&I, &J); // Pass by pointer
	Swap(I, J); // Pass by reference

	cout << I << " " << J << endl;
}