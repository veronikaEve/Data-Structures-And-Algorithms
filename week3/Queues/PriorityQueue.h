#include <iostream>

using namespace std;

class PriorityQueue {
public:
	int count;
	int size;
	int *data;

	~PriorityQueue();
	PriorityQueue(int size);

	void Insert(int Item);
	bool IsEmpty();
	bool IsFull();
	int PeakMin();
	int Remove();
	int Size();
};

PriorityQueue::~PriorityQueue() {}

PriorityQueue::PriorityQueue(int size) : size(size) {
	count = 0;
	data = new int[size];
}

int PriorityQueue::PeakMin() {
	return data[count-1];
}

bool PriorityQueue::IsEmpty() {
	return count == 0;
}

bool PriorityQueue::IsFull() {
	return  count == size;
}

int PriorityQueue::Size() {
	return sizeof(*data);
}

void PriorityQueue::Insert(int Item) {
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

int PriorityQueue::Remove() {
	int itemToRemove = data[count-1];
	count--;
	return itemToRemove;
}