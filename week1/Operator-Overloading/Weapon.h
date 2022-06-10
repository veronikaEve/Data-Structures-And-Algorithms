class Weapon{
public:
	int id;
	Weapon(){}
	Weapon(int id):id(id){}

	bool operator==(const Weapon&); // the const stopped it from breaking?? why?
};

bool Weapon::operator==(const Weapon& rhd) {
	return this->id == rhd.id;
}