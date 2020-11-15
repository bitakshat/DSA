



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std::chrono;
int main() {	
	auto start = high_resolution_clock::now();
	srand((unsigned) time(NULL));
	int random = rand() % 1000000 - 0 + 1;
	std::cout << "Random number: " << random << std::endl;
	auto stop = high_resolution_clock::now();

	auto duration = duration_cast<microseconds>(stop - start);
	std::cout << "Execution time: " << duration.count() << " ms " << std::endl;
	return 0;		
}
