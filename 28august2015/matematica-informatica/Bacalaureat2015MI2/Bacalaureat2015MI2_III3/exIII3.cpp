using namespace std;

#include <iostream>
#include <math.h>

int prim(int n) {
	if (n == 0 || n == 1) {
		return 0;
	}
	for (int k = 2; k <= sqrt(n); k++) {
		if (n % k == 0) {
			return 0;
		}
	}
	return 1;
}

int NrPrime(long n) {
	int cifre_prime = 0;
	while (n > 0) {
		if (prim(n % 10)) {
			cifre_prime++;
		}
		n = n / 10;
	}
	return cifre_prime;
}

int main() {
	long n;
	cout << "n="; cin >> n;
	cout << "Numarul " << n << " contine " << NrPrime(n) << " cifre prime" << endl;
	return 0;
}