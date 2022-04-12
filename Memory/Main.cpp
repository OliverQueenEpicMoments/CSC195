#include <iostream>
using namespace std;

void OhNo(int Size) {
	char* Block = new char[10000];
	cout << Size << endl;
	OhNo(Size + 10000);
}

int main() {
	OhNo(10000);
		
	int I = 67;
	bool B = true;

	cout << &I << endl;
	cout << &B << endl;

	int* P = new int(10);

	cout << P << endl; // Value = Address of the data in the heap
	cout << &P << endl; // Address = Address of the variable on the stack
	cout << *P << endl; // Dereference = Value of the data pointed at

	int* Po = new int[5];
	Po[0] = 23;
	Po[1] = 36;

	cout << Po << endl;
	cout << &Po << endl;
	cout << Po[1] << endl;
	cout << *P << endl;

	delete P;
	delete[] Po;

}