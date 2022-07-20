#include <iostream>
#include "HashTable.h"
#include "HashTableStr.h"

int main() {
//	HashTable * table = new HashTable(17);
//	table->Insert(new GameObject(10,"Bridge"));
//	table->Insert(new GameObject(5, "Player"));
//	table->Insert(new GameObject(30, "Tank"));
//	table->Insert(new GameObject(16, "AI"));
//
//	Exercise 1
//	table->Insert(new GameObject(16, "ElementToCollideWithAI"));
//	 It was placed at index 0 because its hash was unavailable, so it takes the first available hash which was 0 as
	// the list is only 17 in length
	// this is: Open Addressing - Linear Probing
//
//	table->Display();
//
//	Exercise 2
//	cout << table->Find(30)->name << endl;
//
//	Exercise 3
//	table->Delete(30);
//	table->Display();

//  Exercise 4
	HashTableStr * tableStr = new HashTableStr(17);
	tableStr->Insert(new GameObjectStr("Bridge"));
	tableStr->Insert(new GameObjectStr("Player"));
	tableStr->Insert(new GameObjectStr("Tank"));
	tableStr->Insert(new GameObjectStr("AI"));
	tableStr->Insert(new GameObjectStr("ElementToCollideWithAI"));

	tableStr->Display();
	cout << tableStr->Find("Player")->name << endl;
	tableStr->Delete("AI");
	tableStr->Display();

}
