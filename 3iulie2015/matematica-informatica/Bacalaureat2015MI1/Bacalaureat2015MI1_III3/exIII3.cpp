using namespace std;

#include <iostream>

int fibonacci(int n) {
	if (n == 1) return 1;
	if (n == 2) return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int odd(int n) {
	return (n % 2);
}

int fibo(int n) {
	int current_index = 1, current_position = 0;
	while (1) {
		int current_number = fibonacci(current_index++);
		if (odd(current_number)) {
			current_position++;
			if (current_position == n) {
				return current_number;
			}
		}
	}
}

int main() {
	int n;
	cout << "n = "; cin >> n;
	cout << "Al n-lea numar impar din sirul lui Fibonacci este " << fibo(n) << endl;
	return 0;
}