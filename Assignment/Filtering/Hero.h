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
		details["eyecolour"] = eyeColour;
		details["race"] = race;
		details["haircolour"] = hairColour;
		details["height"] = height;
		details["publisher"] = publisher;
		details["skincolour"] = skinColour;
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
		<< "Eye colour: " << details["eyecolour"] << " | "
		<< "Race: " << details["race"] << " | "
		<< "Hair colour: " << details["haircolour"] << " | "
		<< "Height: " << details["height"] << " | "
		<< "Publisher: " << details["publisher"] << " | "
		<< "Skin colour: " << details["skincolour"] << " | "
		<< "Alignment: " << details["alignment"] << " | "
		<< "Weight: " << details["weight"] <<
		endl;
	}
};