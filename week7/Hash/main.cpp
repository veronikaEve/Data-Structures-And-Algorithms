#include <iostream>
#include "HashTable.h"

int main() {
	HashTable * table = new HashTable(17);
	table->Insert(new GameObject(10,"Bridge"));
	table->Insert(new GameObject(5, "Player"));
	table->Insert(new GameObject(30, "Tank"));
	table->Insert(new GameObject(16, "AI"));

//	Exercise 1
	table->Insert(new GameObject(16, "ElementToCollideWithAI"));
	// It was placed at index 0 because its hash was unavailable, so it takes the first available hash which was 0 as
	// the list is only 17 in length
	// this is: Open Addressing - Linear Probing

	table->Display();
}
