#include <iostream>
using namespace std;

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

int main() {

//  Exercise 1 ---------------------------------------------------------------------------------------------------------
//	int data[10] = { 4, 5, 6, 1, 3, 9, 4, 8, 2, 7 };
//
//	SelectionSort(data, 10);
//
//	for (int i = 0; i < 10; ++i) {
//		cout << data[i] << endl;
//	}

//  Exercise 2 ---------------------------------------------------------------------------------------------------------
	int bigData_length = 1000;
	int bigData[bigData_length];
	for(int i=0;i<bigData_length;i++){
		bigData[i]=rand()%101;
	}

	SelectionSort(bigData, bigData_length);

	for (int i = 0; i < bigData_length; ++i) {
		cout << bigData[i] << endl;
	}

//  Exercise 3 ---------------------------------------------------------------------------------------------------------

}
