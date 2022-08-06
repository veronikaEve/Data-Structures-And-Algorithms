#include "common.h"

#include "getAndStoreData.h"
#include "sortData.h"

int main() {
	string filename = "../heroes_information.csv";

	HeroList *heroList = new HeroList;

	getAndStoreData(heroList, filename);

	cout << "1️⃣ Length of list is: " << heroList->size << endl;
	/* Sort the above created Linked List */

	mergeSort(heroList->first);

	cout << endl;
	heroList->Display();

}