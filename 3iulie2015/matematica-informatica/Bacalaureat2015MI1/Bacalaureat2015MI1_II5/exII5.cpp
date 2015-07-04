using namespace std;

#include <iostream>

int main() {
	int n, **m, i, j;
	cout << "n = "; cin >> n;
	m = new int* [n];
	for (i = 0; i < n; i++) {
		m[i] = new int[n];
	}
	for (i = 0; i < n; i++) {
		cout << "m[0][" << i << "] = "; cin >> m[0][i];
		for (j = 1; j < n; j++) {
			m[j][(i + j) % n] = m[0][i];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	for (i = 0; i < n; i++) {
		delete m[i];
	}
	delete m;
	return 0;
}