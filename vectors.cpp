/*The Vectors*/
#include<iostream>
#include<vector>

int function( int n ) {
	std::vector<int> vec;

	for( int i=0; i<=n; ++i ) {
		vec.push_back(i);
	}
	std::vector<int>::iterator it;
	for( it=vec.begin(); it != vec.end(); it++ ) {
		std::cout << *it << " ";
	}
}

int main(void) {
	function(10);
	return 0;
}