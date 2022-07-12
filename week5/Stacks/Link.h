#include <iostream>
using namespace std;

class Link {
public:
	int data;
	Link* next;

	Link(int data) : data(data) {}

	void Display() { cout << data << endl; }

};

