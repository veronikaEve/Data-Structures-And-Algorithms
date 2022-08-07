class Hero {
public:
	Hero *next;
	map<string, string> details; // store the hero details in a map - with a string based key-value pair

	~Hero() {}

//	Hero constructor
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

//	Returns the user chosen attribute of the hero
	string getAttribute() {
		return details[sortChoice];
	}

//	Display the details of the hero
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