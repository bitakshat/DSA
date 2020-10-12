




#include <iostream>

int func(int *arr, int size) {
	int hashArr[size];
	int index = 0;
    std::cout << "Hash Array: ";
    for(int x = 0; x < size; x++) {
    	// hashArr[x] = arr[x] % size;
    	index = arr[x] % size;
    	hashArr[index] = arr[x];
    	std::cout << hashArr[x] << " ";
    }
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
   	int size = sizeof(array) / sizeof(array[0]);

   	std::cout << "Original Array: ";
   	for(int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
    func(array, size);
    
    return 0;
}
