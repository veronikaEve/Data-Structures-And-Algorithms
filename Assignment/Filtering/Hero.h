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
		cout
		<< "Name: " << this->name << " | "
		<< "Gender: " << this->gender << " | "
		<< "Eye colour: " <<	this->eyeColour << " | "
		<< "Race: " << this->race << " | "
		<< "Hair colour: " << this->hairColour << " | "
		<< "Height: " << this->height << " | "
		<< "Publisher: " << this->publisher << " | "
		<< "Skin colour: " << this->skinColour << " | "
		<< "Alignment: " << this->alignment << " | "
		<< "Weight: " << this->weight <<
		endl;
	}
};