#include "common.h"

#include "getAndStoreData.h"

int main() {
	string filename = "../heroes_information.csv";

	HeroList *heroList = new HeroList;

	getAndStoreData(heroList, filename);

	heroList->Display();



}