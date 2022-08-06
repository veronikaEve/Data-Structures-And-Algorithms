#include <iostream>

using namespace std;

class Hero {
public:
	Hero* next;

	string name;
	string gender;
	string eyeColour;
	string race;
	string hairColour;
	string height;
	string publisher;
	string skinColour;
	string alignment;
	string weight;

	Hero(string name, string gender, string eyeColour, string race, string hairColour, string height, string
	publisher, string skinColour, string alignment, string weight) {
		this->name = name;
		this->gender = gender;
		this->eyeColour = eyeColour;
		this->race = race;
		this->hairColour = hairColour;
		this->height = height;
		this->publisher = publisher;
		this->skinColour = skinColour;
		this->alignment = alignment;
		this->weight = weight;
	}

	void Display() {
		cout <<
		this->name << " " <<
		this->gender << " " <<
		this->eyeColour << " " <<
		this->race << " " <<
		this->hairColour << " " <<
		this->height << " " <<
		this->publisher << " " <<
		this->skinColour << " " <<
		this->alignment << " " <<
		this->weight <<
		endl;
	}
};