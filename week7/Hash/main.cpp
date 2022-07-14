#include <iostream>
#include "HashTable.h"

int main() {
	HashTable * table = new HashTable(17);
	table->Insert(new GameObject(10,"Bridge"));
	table->Insert(new GameObject(5, "Player"));
	table->Insert(new GameObject(30, "Tank"));
	table->Insert(new GameObject(16, "AI"));
	table->Display();
}
