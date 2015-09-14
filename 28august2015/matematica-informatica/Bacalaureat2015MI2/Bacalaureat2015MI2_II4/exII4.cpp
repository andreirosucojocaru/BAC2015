using namespace std;

#include <iostream>

#define SIZE 6

int main() {
	int **a, i, j;
	a = new int*[SIZE];
	for (i = 0; i < SIZE; i++) {
		a[i] = new int[SIZE];
	}
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= 5; j++) {
			a[i][j] = (i - 1) * 5 + j;
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for (i = 0; i < SIZE; i++) {
		delete a[i];
	}
	delete a;
	return 0;
}