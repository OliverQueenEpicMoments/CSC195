#include "Animal.h"
#include <iostream>
using namespace std;


void Animal::Sleep() {
	cout << "Zzz" << endl;
}

void Animal::Speak() {
	cout << "Oink" << endl;
}

void Animal::Print() {
	cout << Speed << endl;
	cout << Lifespan << endl;
}
