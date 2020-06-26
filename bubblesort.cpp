#include<bits/stdc++.h>

void bubbleSort( int array[], int size ) {

	for( int step = 0; step < size -1; ++step ) {

		for( int i = 0; i < size - step - 1; ++i ) {
			if( array[i] > array[i + 1] ) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}

void printArray( int array[], int size ) {
	for( int i = 0; i < size; ++i ) {
		std::cout << " " << array[i];
	}
	std::cout << '\n';
}

//driver code
int main( void ) {
	int data_set1[] = {-2,45,0,11,-9};
	int data_set2[] = {5,3,4,1,2,6,7,8,3,0};

	int size_set1 = sizeof( data_set1 ) / sizeof( data_set1[0] );
	int size_set2 = sizeof( data_set2 ) / sizeof( data_set2[0] );
	
	bubbleSort( data_set1, size_set1 );
    std::cout << "Sorted Array set 1: ";
	printArray( data_set1, size_set1 );
	
    std::cout << std::endl;
    bubbleSort( data_set2, size_set2 );
	std::cout << "Sorted Array set 2: ";
    printArray( data_set2, size_set2 );

	return 0;
}