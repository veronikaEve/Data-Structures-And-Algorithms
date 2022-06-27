#include <iostream>
#include "Queue.h"

using namespace std;

int main() {

	Queue newArray(6);

	newArray.Insert(10);
	newArray.Insert(20);
	newArray.Insert(30);
	newArray.Insert(40);
	newArray.Insert(50);
	newArray.Insert(60);

	while (!newArray.IsEmpty()){
		cout << "Removing: " << newArray.Remove() << endl;
	}
}
