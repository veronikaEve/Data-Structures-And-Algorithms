#include "common.h"

// getData with search input
void findData(string fileName, string toFind) {
	vector<vector<string>> dataSet;
	vector<string> row;
	string line, word;
	bool found = false;

	fstream file (fileName, ios::in);
	if(file.is_open()) {
		while(getline(file, line) && !found){ // gets each line of the file
			stringstream str(line);
			while(getline(str, word, ',') && !found) { // gets each section of the line separated by ','
// searching in the second loop means looping through the line until the search is found
				if (word == toFind ){
					found = true;
					cout << line << endl;
				} else {
					row.push_back(word);
				}
			}
			dataSet.push_back(row);
		}
	}
	else {
		cout<<"Could not open the file" << endl;
	}
}