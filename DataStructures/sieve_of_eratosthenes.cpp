#include <bits/stdc++.h>

void sieve_of_eratosthenes( int n ) {
	bool prime[n+1];
	memset(prime, true, sizeof(prime));
	int p = 2;

	for( int i=p; i<=n; ++i ) {
		if( prime[i] == true) {
			for( int j=i*i; j<=n; j+=i ) {
				prime[j] = false;
			}
		}
	}
	std::cout <<"Prime numbers in range " << n << ": ";
	/*Printing all prime numbers*/
	for( int x=2; x<=n; x++ ) {
		if( prime[x] ){
			std::cout << x << " ";
		}
	}
}

int main( void ) {
	sieve_of_eratosthenes(10);
	return 0;
} 
