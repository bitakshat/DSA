
#include <iostream>
int stupid_function(int array[]) {
    int total = 0;
    return total;
}

int find_sum(int array[]) {
	int total = 0;
	int size = sizeof(array) / sizeof(array[0]);

	for( int i = 0; i <= size; i++ ) {
		total = total + i;
	}
	std::cout << "Total: " << total << std::endl;
	return total;
}

int main() {
	int arr[] = {2,3,4,3,2,1,2,3,2,3,2};
    find_sum(arr);
    std::cout << "this is a test" << std::endl;
    return 0;
}
