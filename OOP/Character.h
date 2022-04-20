#pragma once
#include <iostream>

namespace HW {
	class Character {
	public:
		Character() {
			std::cout << "default ctor\n";
		};
		Character(std::string Name, int Health) {
			std::cout << "ctor\n";
			this->Name = Name;
			this->Health = Health;
		}

		void Heal(int Recover);
		void TakeDamage(int Damage);
		void BattleCry();

		std::string GetName() {
			return Name;
		}
		int GetHealth() {
			return Health;
		}

	private:
		std::string Name;
		int Health = 0;
	};
}