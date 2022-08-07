#include "common.h"
#include "HeroList.h"
#include "utils.h"
#include "sortData.h"

int main() {
//	Initialize new linked list of heroes
	HeroList *heroList = new HeroList;

//	Retrieve data from the provided csv file
	getAndStoreData(heroList, "../heroes_information.csv");

//	Get user input for which hero detail to sort for
	cout << "Please choose what you want to sort by!" << endl;
	cout << "Your following options are:" << endl;
	displaySortOptions();
	cin >> sortChoice;

//	Get user input for what order to sort in
	cout << "Please choose if you want to sort by descending or ascending values" << endl;
	cin >> sortType;

//  Call mergeSort on heroList
	mergeSort(&heroList->first); // passes in the address of heroList.first

//  Display the sorted values
	heroList->Display();


}