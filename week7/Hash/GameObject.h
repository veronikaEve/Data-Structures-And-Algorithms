#include <iostream>

using namespace std;

class GameObject {
public:
	int key;
	string name;

	GameObject(int key, const string name) : key(key), name(name) {}
};