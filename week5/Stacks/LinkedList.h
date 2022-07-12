#include <iostream>
#include "Link.h"

using namespace std;

class LinkedList {
public:
	Link *first;
	LinkedList();

	bool IsEmpty();
	void Insert(Link *newLink);
	Link * DeleteFirst();

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

Link * LinkedList::DeleteFirst() {
	Link *tempFirst = first;
	first = first->next;
	return tempFirst;

}
