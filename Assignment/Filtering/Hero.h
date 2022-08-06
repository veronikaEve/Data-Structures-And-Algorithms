#include <iostream>

using namespace std;

class Hero {
public:
	Hero *next;
	map<string, string> details;

	~Hero() {}

	Hero(string name, string gender, string eyeColour, string race, string hairColour, string height, string
	publisher, string skinColour, string alignment, string weight) {
		details["name"] = name;
		details["gender"] = gender;
		details["eye colour"] = eyeColour;
		details["race"] = race;
		details["hair colour"] = hairColour;
		details["height"] = height;
		details["publisher"] = publisher;
		details["skin colour"] = skinColour;
		details["alignment"] = alignment;
		details["weight"] = weight;
	}

	string getAttribute() {
		return details[userChoice];
	}

	void Display() {
		cout
		<< "Name: " << details["name"] << " | "
		<< "Gender: " << details["gender"] << " | "
		<< "Eye colour: " << details["eye colour"] << " | "
		<< "Race: " << details["race"] << " | "
		<< "Hair colour: " << details["hair colour"] << " | "
		<< "Height: " << details["height"] << " | "
		<< "Publisher: " << details["publisher"] << " | "
		<< "Skin colour: " << details["skin colour"] << " | "
		<< "Alignment: " << details["alignment"] << " | "
		<< "Weight: " << details["weight"] <<
		endl;
	}
};