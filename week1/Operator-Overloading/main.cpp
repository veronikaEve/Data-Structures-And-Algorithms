#include <iostream>
#include <vector>
#include <algorithm>

#include "Entity.h"
#include "Weapon.h"
#include "IOObject.h"

using namespace std;

int main() {

//	Exercise 1 -------------------------------------------------------------------------------
	Entity e1(10);
	Entity e2(8);

	if (e1 > e2) {
		cout << "e1 is larger than e2" << endl;
	}

	++e2;
	++e2;
	++e2;

	if (e1 < e2) {
		cout << "e1 is smaller than e2" << endl;
	}

//	Exercise 2 -------------------------------------------------------------------------------
	vector<Weapon> data;
	for (int i = 0; i < 10; ++i) {
		data.push_back(Weapon(i));
	}

	vector<Weapon>::iterator it;
	for (it = data.begin(); it != data.end() ; it++) {
		cout << it->id << endl;
	}

//  Exercise 3 -------------------------------------------------------------------------------
	vector<Weapon>::iterator fit;
	fit = find(data.begin(), data.end(), Weapon(5).id);
	// ^^ works with just 5 too. how does it know that 5 is the id value?
	if (fit != data.end()) {
		cout << "Found!!" << endl;
		data.erase(fit);
	}

	for (it = data.begin(); it != data.end() ; it++) {
		cout << it->id << endl;
	}

//	Exercise 4 -------------------------------------------------------------------------------
	IOObject instance;
	instance.DisplayIntLessThan(20); // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19

	int fourFactorialI = instance.factoriaI(4);
	cout << fourFactorialI << endl; // 24

//	Exercise 5 -------------------------------------------------------------------------------
	int fourFactorialR = instance.factorialR(4);
	cout << fourFactorialR << endl; // 24

}
