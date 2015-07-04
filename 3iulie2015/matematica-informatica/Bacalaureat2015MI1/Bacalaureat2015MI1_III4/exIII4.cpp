using namespace std;

#define MAX_VALUE 100

#include <iostream>
#include <fstream>

int main() {
	int k, *occurencies, number_of_pairs = 0, x = -1, y = -1;
	ifstream f("bac.txt");
	occurencies = new int[MAX_VALUE + 1];
	for (k = 0; k <= 100; k++) {
		occurencies[k] = 0;
	}
	if (f.is_open()) {
		while (f >> k) {
			occurencies[k] = 1;
		}
		f.close();
		for (k = 0; k <= 100; k++) {
			if (occurencies[k]) {
				if (x != -1) {
					if (y != -1) {
						x = y;
					}
					y = k;
					if (y - x >= 2) {
						number_of_pairs++;
						cout << x << " " << y << endl;
					}
				} else {
					x = k;
				}
			} 
		}
	}
	if (!number_of_pairs) {
		cout << "nu exista" << endl;
	}
	delete occurencies;
	return 0;
}