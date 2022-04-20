#include "Character.h"
#include <iostream>

namespace HW {
	void Character::Heal(int Recover) {
		Health += Recover;
	}

	void Character::TakeDamage(int Damage) {
		Health -= Damage;
	}

	void Character::BattleCry() {
		std::cout << "AAAHHHHHH!!!" << std::endl;
	}

}