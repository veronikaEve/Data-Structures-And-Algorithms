#include <iostream>

using namespace std;

class GameObjectStr {
public:
	string key;
	string name;

	GameObjectStr(const string name) : key(name), name(name) {}
};