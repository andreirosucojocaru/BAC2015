using namespace std;

#include <iostream>

int main() {
	int n, k;
	long *v;
	cout << "n = "; cin >> n;
	v = new long[n];
	for (k = 0; k < n; k++) {
		cout << "v[" << k << "] = ";
		cin >> v[k];
	}

	long temp = v[n - 1];
	for (k = n - 1; k > 0; k--) {
		v[k] = v[k - 1];
	}
	v[0] = temp;

	for (k = 0; k < n; k++) {
		cout << v[k] << " ";
	}
	cout << endl;
	delete[] v;
	return 0;
}