

#include <iostream>

/* Function to swap the position of two elements */
void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

/* Function to print an array */
void printArray(int array[], int size) {
	for(int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}

void selectionSort(int array[], int size) {
	for(int step = 0; step < size - 1; step++) {
		int min_idx = step;
		for(int i = step + 1; i < size; i++) {
			// select the minimum element in each loop
			if(array[i] < array[min_idx]) {
				min_idx = i;
			}
		}

		// put min at the correst position
		swap(&array[min_idx], &array[step]);
	}
}

/* Driver Code */
int main() {
	int data[] = {20, 12, 10, 15, 2};
	int size = sizeof(data) / sizeof(data[0]);
	selectionSort(data, size);
	std::cout << "Sorted Array in ascending order: ";
	printArray(data, size);
	return 0;
}
