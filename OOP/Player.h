#pragma once
#include "Character.h"

namespace HW {
	class Player : Character {
	public:
		Player() {
			std::cout << "player ctor\n";
		}

		int GetLives() { return Lives;}
		void Setlives(int Lives) { this->Lives = Lives; }

		int GetScores() { return Score; }
		void SetScore(int Score) { this->Score = Score; }

	private:
		int Lives = 0;
		int Score = 0;
	};
}