#include <iostream>

using namespace std;

template<class A>
class PriorityQueue {
public:
	int count;
	int size;
	A **data;

	~PriorityQueue();
	PriorityQueue(int size) : size(size) {
		count = 0;
		data = new A*[size];
	}

	void Insert(A * Item);
	bool IsEmpty();
	bool IsFull();
	A PeakMin();
	A Remove();
	int Size();
};

template<class A>
PriorityQueue<A>::~PriorityQueue() {}

template<class A>
A PriorityQueue<A>::PeakMin() {
	return data[count-1];
}

template<class A>
bool PriorityQueue<A>::IsEmpty() {
	return count == 0;
}

template<class A>
bool PriorityQueue<A>::IsFull() {
	return  count == size;
}

template<class A>
int PriorityQueue<A>::Size() {
	return sizeof(*data);
}

template<class A>
void PriorityQueue<A>::Insert(A *Item) {
	if (IsEmpty()) {
		data[0] = Item;
		count++;
	} else {
		int j;

		for (j=(count-1); j >= 0; j--) {
			if (Item > data[j]) {
				data[(j+1)] = data[j];
			} else {
				break;
			}
		}
		data[(j+1)]=Item;
		count++;
	}
}

template<class A>
A PriorityQueue<A>::Remove() {
	A * itemToRemove = data[count-1];
	count--;
	return *itemToRemove;
}