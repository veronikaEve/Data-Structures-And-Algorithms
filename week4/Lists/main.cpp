#include <iostream>
#include "LinkedList.h"

int main() {

	LinkedList newLinkedList;

	newLinkedList.Insert(new Link(10));
	newLinkedList.Insert(new Link(4));
	newLinkedList.Insert(new Link(50));
	newLinkedList.Insert(new Link(243));
	newLinkedList.Insert(new Link(2));
	newLinkedList.Insert(new Link(17));

//	Exercise 2
//	newLinkedList.Display();

//  Exercise 3
	newLinkedList.Find(4);

}
