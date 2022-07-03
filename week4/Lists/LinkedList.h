#include <iostream>
#include "Link.h"

using namespace std;

class LinkedList {
public:
	Link *first;
	LinkedList();
	bool IsEmpty();
	void Insert(Link *newLink); void Display();
};

LinkedList::LinkedList() {
	first = 0;
}

bool LinkedList::IsEmpty(){
	return (first == 0);
}

void LinkedList::Insert(Link *newLink){
	newLink->next = first;
	first = newLink;
}

void LinkedList::Display() {
	Link *current = first;

	while (current != 0) {
		current->Display();
		current = current->next;
	}
}