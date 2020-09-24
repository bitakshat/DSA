#include <bits/stdc++.h>

void insertionSort(int array[], int n) {
	int i, key, j;
	for(i = 1; i < n; i++ ) {
		key = array[i];
		j = i - 1;

		/*
		 * Move elements of array[0..i-1], that are
		 * greater than key, to one position ahead of their 
		 * current position
		*/

		while(j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j = j - 1;
		}
		array[j + 1] = key;
	}
}

// Function to print an array of size n
void printArray(int array[], int n) {
	int i;
	for(i = 0; i < n; i++) 
		std::cout << array[i] << " ";
	std::cout << std::endl;
}

/* Driver Code */
int main(void) {
	int arr[] = { 10, 9, 13, 4, 8};
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	printArray(arr, n);
	return 0;
}