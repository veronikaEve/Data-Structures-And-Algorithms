#include "Hero.h"

class HeroList {
public:
	Hero *first;
	int size;

	HeroList() {
		first = 0;
		size = 0;
	}

	void Insert(Hero *newHero){
		newHero->next = first;
		first = newHero;
	}

	void Display() {
		Hero *current = first;
		int count = 0;

		while (current != 0) {
			current->Display();
			current = current->next;
			count++;
		}
	}
};



