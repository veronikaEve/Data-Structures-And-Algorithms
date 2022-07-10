#include <iostream>
#include "Stack1.h"

int main() {

//	Exercise 1
	Stack1 newStack1(4);

	newStack1.Push(3);
	newStack1.Push(8);
	newStack1.Push(14);
	newStack1.Push(5);

	while (!newStack1.isEmpty()) {
		cout << newStack1.Pop() << endl;
	}

}
