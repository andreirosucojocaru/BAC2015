using namespace std;

#include <iostream>

int main() {
	int n, k, pm = 0, i = 1, x, p;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
	while (i <= n) {
		x = i;
		p = 0;
		while (x % k == 0) {
			x /= k;
			p++;
		}
		if (p > pm) {
			pm = p;
		}
		i++;
	}
	cout << "pm = " << pm << endl;
	return 0;
}