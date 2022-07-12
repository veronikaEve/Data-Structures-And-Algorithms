#include <iostream>
#include "LinkedList.h"

using namespace std;

class LinkedStack{
public:
	LinkedList * stackData;
	int top;

	~LinkedStack();
	LinkedStack();

	bool isEmpty();
	bool isFull();
	Link * Peek();
	Link * Pop();
	void Push(int value);

};

LinkedStack::LinkedStack() {
	stackData = new LinkedList();
	top = -1;
}

LinkedStack::~LinkedStack() {

}

bool LinkedStack::isEmpty() {
	return stackData->IsEmpty();
}

bool LinkedStack::isFull() {
		return false; // Can never be full
}

Link * LinkedStack::Peek() {
	return stackData->first;
}

Link * LinkedStack::Pop() {
	top--;
	return stackData->DeleteFirst();
}

void LinkedStack::Push(int value) {
	stackData->Insert(new Link(value));
	top++;
}
