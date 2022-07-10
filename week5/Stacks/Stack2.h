#include <iostream>

using namespace std;

template<typename T>
class Stack2 {
public:
	int maxSize;
	T * stackData;
	int top;

	~Stack2();
	Stack2(int maxSize) : maxSize(maxSize) {
		stackData = new T[maxSize];
		top = -1;
	}

	bool isEmpty();
	bool isFull();
	T Peek();
	T Pop();
	void Push(T value);

};

template<typename T>
Stack2<T>::~Stack2() {}

template<typename T>
bool Stack2<T>::isEmpty() {
	if (top == -1)
		return true;
	else
		return false;
}

template<typename T>
bool Stack2<T>::isFull() {
	if (top == (maxSize -1))
		return true;
	else
		return false;
}

template<typename T>
T Stack2<T>::Peek() {
	return stackData[top];
}

template<typename T>
T Stack2<T>::Pop() {
	T topStackData = stackData[top];
	top--;
	return topStackData;
}

template<typename T>
void Stack2<T>::Push(T value) {
	top++;
	stackData[top] = value;
}
