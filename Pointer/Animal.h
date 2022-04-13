#pragma once

class Animal {
public:
	Animal(int Lifespan, float Speed) {
		this->Lifespan = Lifespan;
		this->Speed = Speed;
	}

	void Sleep();
	void Speak();
	
	void Print();

private:
	int Lifespan;
	float Speed;
};