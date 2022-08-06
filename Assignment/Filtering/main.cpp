#include "common.h"

#include "utils.h"

#include "getAllData.h"
#include "findData.h"
#include "filterData.h"
#include "getAndStoreData.h"

int main() {
	string filename = "../heroes_information.csv";
//	filterData(filename, "Female");

//	getAllData(filename);
//

//	struct FilterType Gender = {1, "Gender"};
//
//	map<string, int> filterTypes;
//
//	filterTypes.insert(pair<string, int>("Gender",2));
//	filterTypes.insert(pair<string, int>("EyeColour",  3));
//

	HeroList *heroList = new HeroList;

	getAndStoreData(heroList, filename);

	heroList->Display();



}




//	ifstream fin;
//	string line;
//	// Open an existing file
//	fin.open(filename);
//	while(!fin.eof()){
//		fin>>line;
//		cout<<line << endl;
//	}