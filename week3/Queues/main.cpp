#include <iostream>
#include "Queue.h"
#include "PriorityQueue.h"
#include "GameObject.h"

using namespace std;

int main() {

//	Exercises 1-3
//	Queue newArray(6);
//
//	newArray.Insert(10);
//	newArray.Insert(20);
//	newArray.Insert(30);
//	newArray.Insert(40);
//	newArray.Insert(50);
//	newArray.Insert(60);
//
//	while (!newArray.IsEmpty()){
//		cout << "Removing: " << newArray.Remove() << endl;
//	}

//	Exercises 4-5
//	PriorityQueue newPriorityArray(6);
//
//	newPriorityArray.Insert(43);
//	newPriorityArray.Insert(23);
//	newPriorityArray.Insert(54);
//	newPriorityArray.Insert(11);
//	newPriorityArray.Insert(233);
//	newPriorityArray.Insert(3);
//
//	for (int i = 0; i < newPriorityArray.size; ++i) {
//		cout << "Item at index " << i << " is: " << newPriorityArray.data[i] << endl;
//	}
//
//	while (!newPriorityArray.IsEmpty()){
//		cout << "Removing: " << newPriorityArray.Remove() << endl;
//	}

//	Exercise 6
PriorityQueue<GameObject> gameList(6);

gameList.Insert(new GameObject(007, "first game in the list"));
gameList.Insert(new GameObject(005, "second game in the list"));
gameList.Insert(new GameObject(163, "third game in the list"));
gameList.Insert(new GameObject(044, "fourth game in the list"));
gameList.Insert(new GameObject(015, "fifth game in the list"));
gameList.Insert(new GameObject(003, "sixth game in the list"));

	while (!gameList.IsEmpty()){
		cout << "Removing: " << gameList.Remove().name << endl;
	}
}
