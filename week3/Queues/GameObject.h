#include <iostream>

using namespace std;

class GameObject {
public:
	int key;
	string name;

	~GameObject();
	GameObject(int key, const string name);

	bool operator>(const GameObject&);
};

GameObject::~GameObject() {}

GameObject::GameObject(int key, const string name) : key(key), name(name) {}

bool GameObject::operator>(const GameObject& rhd) {
	return false;
}