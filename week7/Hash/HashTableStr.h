#include <iostream>
#include "GameObjectStr.h"

using namespace std;

class HashTableStr {
public:

	GameObjectStr ** data;
	int size;

	HashTableStr(int size) : size(size){
		data = new GameObjectStr*[size];
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

	int HashFunction(string key){
		int ASCIItot = 0;
		for (int i = 0; i < key.length(); i++) {
			ASCIItot += (int)key[i];
		}
		return ASCIItot % size;
	};

	void Insert(GameObjectStr* item){
		string key = item->key;
		int hash = HashFunction(key);
		while (data[hash] != NULL){
			++hash; // why does this need to increment before use, it seems to work with hash++ too
			hash %= size;
		}
		data[hash] = item;
	};

	GameObjectStr * Find(string name){
		int hash = HashFunction(name);
		while (data[hash] != NULL){
			if (data[hash]->key == name){
				return data[hash];
			}
			hash++;
			hash = hash % size;
		}
		return NULL;
	}

	GameObjectStr * Delete(string name) {
		int hash = HashFunction(name);
		while (data[hash] != NULL) {
			if (data[hash]->key == name) {
				GameObjectStr *temp = data[hash];
				data[hash] = NULL;
				return temp;
			}
			hash++;
			hash = hash % size;
		}
		return NULL;
	};
};