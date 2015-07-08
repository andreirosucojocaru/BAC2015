using namespace std;

#include <iostream>

int main() {
	int n, k = 1, fibonacci1 = 0, fibonacci2 = 0, fibonacci;
	cout << "n = "; cin >> n;
	while (n > 0) {
		switch (k) {
			case 1:
				fibonacci1 = 1;
				fibonacci = 1;
				break;
			case 2:
				fibonacci2 = 1;
				fibonacci = 1;
				break;
			default:
				fibonacci = fibonacci1 + fibonacci2;
				fibonacci1 = fibonacci2;
				fibonacci2 = fibonacci;
				break;
		}
		if (fibonacci % 2 == 1) {
			n--;
		}
		if (n != 0) {
			k++;
		}
	}
	cout << "Elementul cautat se gaseste pe pozitia " << k << " si are valoarea " << fibonacci << endl;
	return 0;
}