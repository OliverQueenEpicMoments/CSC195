#include "Character.h"
#include "Player.h"
#include <iostream>

using namespace std;
using namespace HW;

int main() {
	cout << "<-- Character -->\n";
	Character Character("Conan", 100);

	cout << Character.GetName() << endl;
	Character.BattleCry();

	Character.TakeDamage(14);
	Character.Heal(4);

	cout << Character.GetHealth() << endl;

	cout << "<-- Player -->\n";
	Player player;
}