#include <iostream>

using namespace std;

class Stack1 {
public:
	int maxSize;
	int * stackData;
	int top;

	~Stack1();
	Stack1(int maxSize);

	bool isEmpty();
	bool isFull();
	int Peek();
	int Pop();
	void Push(int value);

};

Stack1::Stack1(int maxSize) : maxSize(maxSize) {
	stackData = new int[maxSize];
	top = -1;
}

Stack1::~Stack1() {

}

bool Stack1::isEmpty() {
	if (top == -1)
		return true;
	else
		return false;
}

bool Stack1::isFull() {
	if (top == (maxSize -1))
		return true;
	else
		return false;
}

int Stack1::Peek() {
	return stackData[top];
}

int Stack1::Pop() {
	int topStackData = stackData[top];
	top--;
	return topStackData;
}

void Stack1::Push(int value) {
	top++;
	stackData[top] = value;
}
