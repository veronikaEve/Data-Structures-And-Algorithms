#include <iostream>
#include "Hero.h"

using namespace std;

class HeroList {
public:
	Hero *first;
	int size;

	HeroList() {
		first = 0;
		size = 0;
	}
	void Insert(Hero *newHero){
		if(first == NULL) {
			first = newHero;
		} else {
			Hero *temp = first;
			//Iterate the linked list
			while(temp->next != NULL){
				temp = temp->next;
			}
			//insert the node at the end of the linked  list
			temp->next=newHero;
		}
	}


	void Display() {
		Hero *current = first;
		int count =0;

		while (current != 0) {
			current->Display();
			current = current->next;
			count++;
		}
		cout << "2️⃣ Length of list is: " << count << endl;
	}
};



//	Hero * Find(string dataType, int key) {
//		Hero *current = first;

//		while (current[dataType] != key) {
//			if (current->next == 0)
//				return 0;
//			else
//				current = current->next;
//		}
//
//		current->Display();
//		return current;
//	}


