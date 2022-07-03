#include <iostream>
using namespace std;

class Link {
public:
	int data;
	Link* next;

	Link(int data);

	void Display();
	int GetData();

};

Link::Link(int data) : data(data) {
}

void Link::Display() {
	cout << data << endl;
}
