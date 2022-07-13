#include <iostream>
#include "Tree.h"

int main() {
	Tree newTree;

	newTree.Insert(5);
	newTree.Insert(65);
	newTree.Insert(2);
	newTree.Insert(13);
	newTree.Insert(34);
	newTree.Insert(8);

	newTree.DisplayInOrder(newTree.root); // output 2, 5, 8, 13, 34, 65

}
