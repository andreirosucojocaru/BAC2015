using namespace std;

#include <iostream>
#include <fstream>

int parity(int n) {
	return n % 2;
}

int main() {
	ifstream file("bac.txt");
	int n, crt_pos = 0, temp, sum_first_odd = 0, sum_first_even = 0, sum_last_odd = 0, sum_last_even = 0;
	if (file.is_open()) {
		file >> n;
		while (file >> temp) {
			if (crt_pos < n) {
				if (parity(temp)) {
					sum_first_odd += temp;
				}
				else {
					sum_first_even += temp;
				}
			}
			else {
				if (parity(temp)) {
					sum_last_odd += temp;
				}
				else {
					sum_last_even += temp;
				}
			}
		}
		cout << "Suma este " << (sum_first_odd * sum_last_even + sum_first_even * sum_last_odd) << endl;
		file.close();
	}
	return 0;
}