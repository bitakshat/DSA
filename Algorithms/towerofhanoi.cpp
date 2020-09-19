


#include <bits/stdc++.h>

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
	if( n == 1 ) {
		std::cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << std::endl;
	}	

	towerOfHanoi( n - 1, from_rod, aux_rod, to_rod );
	std::cout << "Move Disk " << n << " from rod " << from_rod << " to rod " << to_rod << std::endl;

	towerOfHanoi( n - 1, aux_rod, to_rod, from_rod);
}

// Driver Code
int main( void ) {
	int n = 4; // Number of disks
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B, C names of rod
	return 0;
}
