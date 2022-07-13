#include <iostream>
#include "Node.h"

using namespace std;

class Tree {
public:
	Node *root;

	Tree();

	Node *Find(int key);

	void DisplayInOrder(Node *localRoot);
};

Tree::Tree() {
	root = 0;
}

Node *Tree::Find(int key) {
	Node *current = root;
	while (current->data != key) {
		if (key < current->data) {
			current = current->leftChild;
		} else {
			current = current->rightChild;
		}

		if (current == 0) {
			return 0;
		}
	}
	return current;
}

void Tree::DisplayInOrder(Node *localRoot) {
	if (localRoot != 0) {
		DisplayInOrder(localRoot->leftChild);
		localRoot->Display();
		DisplayInOrder(localRoot->rightChild);
	}
}


