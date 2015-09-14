#include <iostream>

using namespace std;

int main() {
	int n, odd_encountered = 0, even_encountered = 0;
	long *v;
	cout << "n="; cin >> n;
	v = new long[n];
	for (int k = 0; k < n; k++) {
		cout << "v[" << k << "]=";
		cin >> v[k];
	}
	for (int k = 0; k < n; k++) {
		if (v[k] % 2 == 0) {
			even_encountered = 1;
		}
		else if (v[k] != 2015) {
			odd_encountered = 1;
		}
	}
	if (even_encountered && !odd_encountered) {
		cout << "DA";
	}
	else {
		cout << "NU";
	}
	delete v;
	return 0;
}
