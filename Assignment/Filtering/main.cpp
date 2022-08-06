#include "common.h"

#include "getAndStoreData.h"
#include "sortData.h"

int main() {
	string filename = "../heroes_information.csv";

	HeroList *heroList = new HeroList;

	getAndStoreData(heroList, filename);
	userChoice = "eye colour";

	mergeSort(&heroList->first); // passes in the address of heroList.first

	heroList->Display();

}