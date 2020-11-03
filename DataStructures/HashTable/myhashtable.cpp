


#include <iostream>

void hashFunction(int *arr, int size) {
	int hashArr[size];
	for(auto x = 0; x < size; x++) {
		int key = arr[0] % size;
		hashArr[key] = arr[x];
	}

	std::cout << "Hashed Array: ";
	for(auto x: hashArr) {
		std::cout << x << " ";
	}
}

int main() {
	int arr[] = {10, 20, 30, 40, 50};
	int size = sizeof(arr) / sizeof(arr[0]);

	std::cout << "Table: ";
	for(auto x: arr) {
		std::cout << x << " ";
	}
	std::cout << std::endl;
	hashFunction(arr, size);

	return 0;
}