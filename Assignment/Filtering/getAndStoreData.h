#include "HeroList.h"

void getAndStoreData(HeroList *heroList, string fileName) {

	vector<string> row;
	string line, word;

	fstream file (fileName, ios::in);
	if(file.is_open()) {
		while(getline(file, line)){
			row.clear();
			stringstream str(line);
			while(getline(str, word, ',')) {
				row.push_back(word);
			}
			heroList->Insert(new Hero(row[1], row[2], row[3], row[4], row[5], row[6], row[7], row[8], row[9], row[10]));
			heroList->size++;
		}
	}
	else {
		cout<<"Could not open the file" << endl;
	}
}

