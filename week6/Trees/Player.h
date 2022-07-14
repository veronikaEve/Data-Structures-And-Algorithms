#include <iostream>

using namespace std;

class Player {
public:
	Player *leftChild;
	Player *rightChild;
	int kills;
	int level;

	Player(int level, int kills);

	void Display();

	int Factorial(int n);

	bool LessThan(Player *p1, Player *p2);
};

Player::Player(int level, int kills) {
	this->kills = kills;
	this->level = level;
	leftChild = 0;
	rightChild = 0;
}

void Player::Display() {
	cout << "Level: " << this->level << " Kills : " << this->kills << endl;
}

int Player::Factorial(int n) {
	if (n == 1) {
		return 1;
	} else {
		return Factorial(n - 1) * n;
	}
}

bool Player::LessThan(Player *p1, Player *p2) {
	int scoreA = p1->Factorial(level) * p1->kills;
	int scoreB = p2->Factorial(level) * p2->kills;
	if (scoreA < scoreB) {
		return true;
	} else {
		return false;
	}
}
