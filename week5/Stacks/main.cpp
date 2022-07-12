#include <iostream>
#include "Stack1.h"
#include "Stack2.h"
#include "LinkedStack.h"

int main() {

//	Exercise 1 --------------------------------------------------------------------------------------
//	Stack1 newStack1(4);
//
//	newStack1.Push(3);
//	newStack1.Push(8);
//	newStack1.Push(14);
//	newStack1.Push(5);
//
//	while (!newStack1.isEmpty()) {
//		cout << newStack1.Pop() << endl;
//	}


//  Exercise 2 --------------------------------------------------------------------------------------
//  int
//	Stack2<int> intStack(5);
//
//	intStack.Push(1);
//	intStack.Push(3);
//	intStack.Push(5);
//	intStack.Push(7);
//	intStack.Push(9);
//
//	cout << endl << "Stack containing integer values: " << endl;
//	while (!intStack.isEmpty()) {
//		cout << intStack.Pop() << endl;
//	}
//
//  float
//	Stack2<float> floatStack(5);
//
//	floatStack.Push(2.5);
//	floatStack.Push(4.7);
//	floatStack.Push(6.9);
//	floatStack.Push(8.11);
//	floatStack.Push(10.13);
//
//	cout << endl << "Stack containing float values: " << endl;
//	while (!floatStack.isEmpty()) {
//		cout << floatStack.Pop() << endl;
//	}


//  Exercise 3 --------------------------------------------------------------------------------------
	LinkedStack * newLinkedStack = new LinkedStack();

	newLinkedStack->Push(1);
	newLinkedStack->Push(3);
	newLinkedStack->Push(5);
	newLinkedStack->Push(7);
	newLinkedStack->Push(9);

	cout << endl << "LinkedStack that implements stackData as a Linked List:" << endl;
	while (!newLinkedStack->isEmpty()) {
		cout << newLinkedStack->Pop()->data << endl;
	}
}
