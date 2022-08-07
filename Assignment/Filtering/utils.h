//  Function for retrieving the data from the csv file
//  Converts and adds each new Hero into the heroList linked list
void readAndStoreData(HeroList *heroList, string fileName) {
	vector<string> row; // declares a vector of strings called row where each csv element will be temporarily stored
	string line, word;

	fstream file (fileName, ios::in); // opens the provided file and reads from it
	if(file.is_open()) {
		while(getline(file, line)){ // loops through each line of the csv file
			row.clear(); // clears the contents of row in each iteration so it can be reused
			stringstream str(line); // reads the line of string
			while(getline(str, word, ',')) { // loops through each element in the line separated by a ","
				row.push_back(word); // adds the extracted word to the end of the row vector
			}
			//	each index of the row represents each attribute of the Hero. It is important that they are inserted
			//	in order
			heroList->Insert(new Hero(row[1], row[2], row[3], row[4], row[5], row[6], row[7], row[8], row[9], row[10]));
			heroList->size++;
		}
	}
	else {
		cout<<"Could not open the file" << endl;
	}
}

// Function for writing the sorted heroList into a new file
// This may not end up being written in the same directory as the rest of the files.
// For me, it created the file in my cmake-build-debug folder
void writeToCSV(Hero *first, string fileName) {
	fstream file(fileName+".csv", ios::out | ios::app);
	file ? cout<< fileName+".csv was created successfully 🥳" << endl : cout<<"Could not create file 🙁" << endl;

	Hero *current = first;
	while (current != 0) {
		// Iterating through the current.details map is possible, however the correct csv syntax could not be applied
		// with the iteration, it unfortunately only works with hard coding every value separated with a comma apart
		// from the last one
		file
			<< current->details["name"] << ","
			<< current->details["gender"] << ","
			<< current->details["eyecolour"] << ","
			<< current->details["race"] << ","
			<< current->details["haircolour"] << ","
			<< current->details["height"] << ","
			<< current->details["publisher"] << ","
			<< current->details["skincolour"] << ","
			<< current->details["alignment"] << ","
			<< current->details["weight"] << "\n";
		current = current->next;
	}
}

// Function to change wether the sorting algorithm should sort ascending or descending - based on the user input
bool compareElements(string left, string right) {
	if (sortType == "ascending") {
		return left <= right;
	} else if (sortType == "descending") {
		return left >= right;
	} else {
		cout << "Sort type not found :(" << endl;
	}
}

// Function to store and output what options the user has to sort by
// Options are stored in an array of strings -> easy to loop through for display purposes
void displaySortOptions() {
	string heroDetails[] = {"name", "gender", "eyecolour", "race", "haircolour", "height", "publisher", "skincolour","alignment", "weight"};
	for (const auto &item: heroDetails){
		cout << " | " << item;
	}
	cout << endl;
}