using namespace std;

#define MAX_SIZE 100

#include <iostream>
#include <fstream>

int main() {
	ifstream file("bac.txt");
	int *exists = new int[MAX_SIZE + 1], n, last_position = -1;
	for (n = 0; n <= MAX_SIZE; n++) {
		exists[n] = 0;
	}
	if (file.is_open()) {
		while (file >> n) {
			exists[n] = 1;
		}
		file.close();
		for (n = 0; n <= MAX_SIZE; n++) {
			if (exists[n]) {
				if ((last_position != -1) && (n - last_position >= 2)) {
					cout << "DA" << endl;
					break;
				}
				last_position = n;
			}
		}
	}
	if (n == MAX_SIZE + 1) {
		cout << "NU" << endl;
	}
	delete[] exists;
	return 0;
}