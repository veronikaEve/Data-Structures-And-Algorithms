#include <iostream>

using namespace std;

class Queue {
public:
	int count;
	int front;
	int rear;
	int size;
	int *data;

	~Queue();
	Queue(int size);

	void Insert(int Item);
	bool IsEmpty();
	bool IsFull();
	int PeakFront();
	int Remove();
	int Size();
};

Queue::~Queue() {}

Queue::Queue(int size) : size(size) {
	front = 0;
	rear = -1;
	count = 0;
	data = new int[size];
}

int Queue::PeakFront() {
	return data[front];
}

bool Queue::IsEmpty() {
	return count == 0; // count holds the number of things in the array!!!! kinda
}

bool Queue::IsFull() {
	return  count == size;
}

int Queue::Size() {
	return sizeof(*data);
}

void Queue::Insert(int Item) {
	if (rear == (size-1)){
		rear = -1;
	}
	rear++;
	data[rear] = Item;
	count++;
}

int Queue::Remove() {
	int itemToRemove = data[front];
	front+=1;
	if (front == size) {
		front = 0;
	}
	count --;
	return itemToRemove;
}