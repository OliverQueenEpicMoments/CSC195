#include <iostream>
using namespace std;

struct Person {
	string Name;
	int ID;
};

void Square(int& IDK) {
	IDK = IDK * IDK;
}

void Double(int* Pointy) {
	*Pointy = *Pointy * 2;
}

int main()
{
	// ** REFERENCE **
	// what happened to the int variable when the reference was changed? (insert answer)
	// The int varable was changed to what the reference was also changed to.
	// are the addresses the same or different? (insert answer)
	// They are the same.

	int PVC = 7;
	int& DVD = PVC;

	cout << PVC << endl;
	DVD = 15;
	cout << PVC << endl;
	cout << &PVC << endl;
	cout << &DVD << endl;


	// ** REFERENCE PARAMETER **
	//
	// create a function above main() called Square that takes in an int parameter(void return type)
		// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
		// call the Square function in main() with the int variable created in the REFERENCE section
		// output the int variable to the console
		// !! notice how the variable has not changed, this is because we only passedthe value to the function !!
		// change the Square function to take a int reference as a parameter
		// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
		// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
		
	cout << " " << endl;
	Square(PVC);
	cout << PVC << endl;

		// ** POINTER VARIABLE **
		// 
		// declare an int pointer, set it to nullptr (it points to nothing)
		// set the int pointer to the address of the int variable created in the REFERENCE section
		// output the value of the pointer (this is the address it is pointing at)
		// what is this address that the pointer is pointing to? (insert answer)
		// The address is 0065FA0C
		// output the value of the object the pointer is pointing to (dereference thepointer)

	cout << " " << endl;
	int* Joe = nullptr;
	Joe = &PVC;

	cout << Joe << endl;
	cout << *Joe << endl;
		
		// ** POINTER PARAMETER **
		//
		// create a function above main() called Double that takes in an int pointer parameter
		// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
		// !! make sure to dereference the pointer to set the value and not set the address !!
		// call the Double function with the pointer created in the POINTER VARIABLE section
		// output the dereference pointer
		// output the int variable created in the REFERENCE section
		// did the int variable's value change when using the pointer?
		// Yes.
		
	cout << " " << endl;
	Double(Joe);
	cout << *Joe << endl;
	cout << PVC << endl;
		 
		// ** ALLOCATION/DEALLOCATION **
		//
		// create an int pointer that points at an int allocated on the heap, set the allocated int value to some number
		// output the pointer value, this should be the address of the int allocated on the heap
		// output the dereferenced pointer
		// deallocate the int pointer to free up the memory (hint: delete from memory)
		// create an int pointer that points at an array of ints allocated on the heap, the array size should be 5
		// use a for loop and set each int in the array to a random number (use => rand() % 10 to get a random number)
		// use a for loop and output each of the ints in the array
		// use a for loop and output the address of each of the ints in the array
		// deallocate the int pointer to free up the memory block (remember it's an array[])
		
	cout << " " << endl;
	int* Mama = new int(21);
	cout << Mama << endl;
	cout << *Mama << endl;
	delete Mama;

	int* Team = new int[5];
	for (int I = 0; I < 5; I++) {
		Team[I] = rand() % 10;
	}

	for (int I = 0; I < 5; I++) {
		cout << Team[I] << endl;
	}

	for (int I = 0; I < 5; I++) {
		cout << &Team[I] << endl;
	}

	for (int I = 0; I < 5; I++) {
		delete Team;
	}
	delete[] Team;
	// Didnt know which to use so I used both 
		 
		// ** STRUCTURE **
		//
		// create a people pointer that points at an array of Persons allocated on the heap, the array size should be 2
		// read in a name from the console and set it to the person name, do this for the id also, do this for both people
		// use a for loop and output the name and id of each person in the array 
		// deallocate the person pointers to free up the memory block (remember it's an array[])

	cout << " " << endl;
	Person* people = new Person[2];

	for (int I = 0; I < 2; I++) {
		cout << "Enter name: ";
		cin >> people[I].Name;
		cout << "Enter ID: ";
		cin >> people[I].ID;
	}

	for (int I = 0; I < 2; I++) {
		cout << people[I].Name << endl;
		cout << people[I].ID << endl;
	}

	for (int I = 0; I < 2; I++) {
		delete people;
	}
	delete[] people;
	// Didnt know which to use so I used both 
}