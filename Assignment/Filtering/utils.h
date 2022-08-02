#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

// getAllData is making the whole data file readable by c++, which means our algorithm has a Quadratic Time Complexity already
// could we improve this to search during the readability conversion?
// DATA SORTED ALPHABETICALLY
vector<vector<string>> getAllData(string fileName) {
	vector<vector<string>> dataSet;
	vector<string> row;
	string line, word;

	fstream file (fileName, ios::in);
	if(file.is_open()) {
		while(getline(file, line)){ // gets each line of the file
			stringstream str(line);
			while(getline(str, word, ',')) { // gets each section of the line separated by ','
				row.push_back(word);
			}
			dataSet.push_back(row);
		}
	}
	else {
		cout<<"Could not open the file" << endl;
	}

	return dataSet;
}