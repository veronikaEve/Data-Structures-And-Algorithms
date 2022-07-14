#include <iostream>
#include "GameObject.h"

using namespace std;

class HashTable {
public:

	GameObject ** data;
	int size;

	HashTable(int size) : size(size){
		data = new GameObject*[size];
		for (int i = 0; i < size; ++i) {
			data[i] = NULL;
		}
	};

	void Display(){
		for (int i = 0; i < size; ++i) {
			if (data[i] != NULL){
				cout << "index: " << i << ", key: " << data[i]->key << ", name: " << data[i]->name << endl;
			}
		}
	};

	int HashFunction(int key){
		return key % size;
	};

	void Insert(GameObject* item){
		int key = item->key;
		int hash = HashFunction(key);
		while (data[hash] != NULL){
			++hash;
			hash %= size;
		}
		data[hash] = item;
	};

};