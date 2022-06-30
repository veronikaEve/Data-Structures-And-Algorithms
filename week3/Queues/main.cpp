#include <iostream>
#include "Queue.h"
#include "PriorityQueue.h"

using namespace std;

int main() {
//
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

	PriorityQueue newPriorityArray(6);

	newPriorityArray.Insert(43);
	newPriorityArray.Insert(23);
	newPriorityArray.Insert(54);
	newPriorityArray.Insert(11);
	newPriorityArray.Insert(233);
	newPriorityArray.Insert(3);

	for (int i = 0; i < newPriorityArray.size; ++i) {
		cout << "Item at index " << i << " is: " << newPriorityArray.data[i] << endl;
	}

	while (!newPriorityArray.IsEmpty()){
		cout << "Removing: " << newPriorityArray.Remove() << endl;
	}
}
