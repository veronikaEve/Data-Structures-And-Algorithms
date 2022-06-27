#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

void Swap(int * a, int * b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

void SelectionSort(int a[], int size) {
	int smallest;
	for ( int n = 0; n < size - 1; ++n) {
		smallest = n;
		for (int i = n + 1; i < size - 1; ++i) {
			if (a[i] < a[smallest]) {
				smallest = i;
			}
		}
		Swap(&a[n], &a[smallest]);
	}
}

void BubbleSort(int a[], int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = 0; j < size-1; ++j) {
			if (a[j] > a[j+1]){
				Swap(&a[j], &a[j+1]);
			}
		}
	}
}

void EnhancedBubbleSort(int a[], int size) {
	bool sorted = false;
	int lastUnsorted = size-1;
	while (sorted == false) {
		sorted = true;
		for (int i = 0; i < lastUnsorted; ++i) {
			if (a[i] > a[i+1]){
				Swap(&a[i], &a[i+1]);
				sorted = false;
			}
		}
		lastUnsorted--;
	}
}

int SequentialSearch(int a[], int size, int key){
	for (int i = 0; i < size-1; ++i) {
		if (a[i] == key){
			return i;
		}
	}
}

int BinarySearch(int a[], int size, int key){
	int middle = 0;
	int lower = 0;
	int upper = size-1;
	while (true){
		middle = (lower + upper)/2;

		if (key < a[middle]){
			upper = middle-1;
		} else if (key > a[middle]) {
			lower = middle+1;
		} else {
			return middle;
		}

		if (lower > upper) {
			return -1;
		}
	}
}

int main() {

// ▶️ Exercise 1 -------------------------------------------------------------------------------------------------------
//	int data[10] = { 4, 5, 6, 1, 3, 9, 4, 8, 2, 7 };
//
//	SelectionSort(data, 10);
//
//	for (int i = 0; i < 10; ++i) {
//		cout << data[i] << endl;
//	}

// ▶️ Exercise 2 -------------------------------------------------------------------------------------------------------
//	int bigData_length = 1000;
//	int bigData[bigData_length];
//	for(int i=0;i<bigData_length;i++){
//		bigData[i]=rand()%101;
//	}
//
//	SelectionSort(bigData, bigData_length);
//
//	for (int i = 0; i < bigData_length; ++i) {
//		cout << bigData[i] << endl;
//	}

// ▶️ Exercise 3 & 4 & 5 -----------------------------------------------------------------------------------------------
	int bigData_length = 1000;

	for (int seconds_to_execute = 0; seconds_to_execute < 1; bigData_length *= 10 ) {
		int bigData[bigData_length];

		for(int i=0;i<bigData_length;i++){
			bigData[i]=rand()%101;
		}

		auto start = high_resolution_clock::now();

//		SelectionSort(bigData, bigData_length); // Exercise 3
//		BubbleSort(bigData, bigData_length); // Exercise 4 faster than the Enhanced Bubble Sort?????????
//		EnhancedBubbleSort(bigData, bigData_length); // Exercise 5

		auto stop = high_resolution_clock::now();

		auto durationSeconds = duration_cast<seconds>(stop - start);
		auto durationMilliseconds = duration_cast<milliseconds>(stop - start - durationSeconds);

		seconds_to_execute = durationSeconds.count();
		int extra_milliseconds = durationMilliseconds.count();

		cout << seconds_to_execute << " seconds and " << extra_milliseconds << " milliseconds " << ends;
		cout << " to execute an array of length: " << bigData_length << endl;
	}

// ▶️ Exercise 6 -------------------------------------------------------------------------------------------------------
//	int resultingIndex = SequentialSearch(bigData, 1000, 15);
//	cout << resultingIndex << endl;

// ▶️ Exercise 7 -------------------------------------------------------------------------------------------------------
//	SelectionSort(bigData, bigData_length);
//
//	int resultingIndexAgain = BinarySearch(bigData, 1000, 15);
//	cout << resultingIndexAgain << endl;

}
