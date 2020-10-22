#include<bits/stdc++.h>

int bubblesort(int array[], int array_size) {
    
    for(int step = 0; step < array_size - 1; ++step) { 
        for(int i = 0; i <= array_size-step-1; ++i) {
            /* swaping indexes */
            if(array[i] > array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
    }
    
    std::cout << "Sorted Array: ";
    for( int x=0; x <= array_size; ++x ) {
        std::cout << array[x] << " ";
    }
    -
}

int main( void ) {
    srand(time(NULL));
    int random_size = rand() % 10 + 1;
    int sample_data[random_size] = {};

    for( int t=0; t<=random_size; ++t ) {
        int value = rand() % 20 + 1;
        sample_data[t] = value;
    }
    int array_size = sizeof(sample_data) / sizeof(sample_data[0]);
    
    /* printing out randomly generated array */
    std::cout << "Unsorted array: ";
    for(int x=0; x<=array_size; ++x ) {
        std::cout << sample_data[x] << " ";
    }
    
    std::cout << std::endl;
    bubblesort(sample_data, array_size);
    return 0;
}