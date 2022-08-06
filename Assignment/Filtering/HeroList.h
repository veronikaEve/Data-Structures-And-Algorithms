#include <iostream>
#include "Hero.h"

using namespace std;

class HeroList {
public:
	Hero *first;

	HeroList() {
		first = 0;
	}

	void Insert(Hero *newHero){
		newHero->next = first;
		first = newHero;
	}

	void Display() {
		Hero *current = first;

		while (current != 0) {
			current->Display();
			current = current->next;
		}
	}


	Hero * Find(string dataType, int key) {
		Hero *current = first;

//		while (current[dataType] != key) {
//			if (current->next == 0)
//				return 0;
//			else
//				current = current->next;
//		}
//
//		current->Display();
//		return current;
	}

};