#include <iostream>
#include "Tree.h"
#include "PlayerTree.h"

int main() {
//	Exercise 3 & 4
//	Tree newTree;
//
//	newTree.Insert(5);
//	newTree.Insert(65);
//	newTree.Insert(2);
//	newTree.Insert(13);
//	newTree.Insert(34);
//	newTree.Insert(8);
//
//	newTree.DisplayInOrder(newTree.root); // output 2, 5, 8, 13, 34, 65


//  Exercise 5 & 6
	PlayerTree players;

	players.Insert(new Player(4, 6));
	players.Insert(new Player(10, 45));
	players.Insert(new Player(5, 14));
	players.Insert(new Player(2, 0));
	players.Insert(new Player(1, 0));
	players.Insert(new Player(8, 38));

	players.DisplayInOrder(players.root);

	// output:
//	Level: 2 Kills : 0
//	Level: 1 Kills : 0
//	Level: 4 Kills : 6
//	Level: 5 Kills : 14
//	Level: 8 Kills : 38
//	Level: 10 Kills : 45

}
