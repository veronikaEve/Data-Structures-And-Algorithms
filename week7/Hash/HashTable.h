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
		return key % size; // % = modulus which returns the remainder after a division
	};

	void Insert(GameObject* item){
		int key = item->key;
		int hash = HashFunction(key);
		while (data[hash] != NULL){
			++hash; // why does this need to increment before use, it seems to work with hash++ too
			hash %= size;
		}
		data[hash] = item;
	};

	GameObject * Find(int key){
		int hash = HashFunction(key);
		while (data[hash] != NULL){
			if (data[hash]->key == key){
				return data[hash];
			}
			hash++;
			hash = hash % size;
		}
		return NULL;
	}

	GameObject * Delete(int key) {
		int hash = HashFunction(key);
		while (data[hash] != NULL) {
			if (data[hash]->key == key) {
				GameObject *temp = data[hash];
				data[hash] = NULL;
				return temp;
			}
			hash++;
			hash = hash % size;
		}
		return NULL;
	}
};