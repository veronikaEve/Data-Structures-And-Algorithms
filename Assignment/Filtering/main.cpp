#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

#include "utils.h"

int main() {
	vector<vector<string>> dataSet = getAllData("../heroes_information.csv");

	for(int row=0;row<dataSet.size();row++) {
		for(int column=0;column<dataSet[row].size();column++) {
			cout << dataSet[row][column];
		}
		cout << "\n";
	}

	return 0;
}
