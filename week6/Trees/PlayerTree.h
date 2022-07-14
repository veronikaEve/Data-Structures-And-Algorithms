#include <iostream>
#include "Player.h"

using namespace std;

class PlayerTree {
public:
	Player *root;

	PlayerTree();

	Player *Find(int key);

	void DisplayInOrder(Player *localRoot);

	void Insert(Player *newPlayer);
};

PlayerTree::PlayerTree() {
	root = 0;
}


void PlayerTree::DisplayInOrder(Player *localRoot) {
	if (localRoot != 0) {
		DisplayInOrder(localRoot->leftChild);
		localRoot->Display();
		DisplayInOrder(localRoot->rightChild);
	}
}

void PlayerTree::Insert(Player *newPlayer) {
	Player *newNode = newPlayer;
	if (root == 0) {
		root = newNode;
	} else {
		Player *current;
		current = root;
		Player *parent;
		while (true) {
			parent = current;
			if (newPlayer->LessThan(newPlayer, current)) {
				current = current->leftChild;
				if (current == 0) {
					parent->leftChild = newNode;
					return;
				}
			} else {
				current = current->rightChild;
				if (current == 0) {
					parent->rightChild = newNode;
					return;
				}
			}
		}
	}
}