#include <iostream>

using namespace std;

class Node {
public:
	Node *leftChild;
	Node *rightChild;
	int data;

	Node(int data);

	void Display();
};

Node::Node(int data) {
	this->data = data;
	leftChild = 0;
	rightChild = 0;
}

void Node::Display() {
	cout << this->data << endl;
}

