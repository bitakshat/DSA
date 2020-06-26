	//Hash DS, Hashing
#include<bits/stdc++.h>

struct DataItem {
	int data;
	int key;
};

int hashCode(int key) {
	return key % SIZE;
}

struct DataItem *search(int key) {
	//get the hash
	int hashIndex = hashCode(key);

	//move in array until an empty
	while(hashArray[hashIndex] != NULL) {
		if(hashArray[hashIndex] -> key == key) {
			return hashArray[hashIndex];

			//goto next cell
			++hashIndex;
			hashIndex %= SIZE;
		}
	}
	return NULL;
}

//Insertion
void insert(int key, int data) {
	struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
	item -> data = data;
	item -> key = key;

	//get the hash
	int hashIndex = hashCode(key);
	while(hashArray[hashIndex] != NULL && hashArray[hashIndex] -> key != -1) {
		//goto next cell
		++hashIndex;
		hashIndex %= SIZE;
	}
	hashArray[hashIndex] = item;
}

//Delete opration
struct DataItem* delete(struct DataItem* item) {
	int key = item -> key;
	//get the hash
	int hashIndex = hashCode(key);
	//move in array until an empty
	while(hashArray[hashIndex] != NULL) {

		if(hashArray[hashIndex] -> key == key) {
			struct DataItem *temp  = hashArray[hashIndex];
			//assign a dummy item at deleted position
			hashArray[hashIndex] = dummyItem;
			return temp;
		}
		//goto next cell
		++hashIndex;
		//warp around the table
		hashIndex %= SIZE;
	}
	return NULL;
};

int main( void ) {

} 
