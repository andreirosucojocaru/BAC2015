using namespace std;

#define MAX_LENGTH 20

#include <iostream>
#include <string>

int main() {
	char *a, *b;
	int index;
	a = new char[MAX_LENGTH];
	b = new char[MAX_LENGTH];
	cout << "b = "; cin >> b;
	for (index = 0; index < (int)strlen(b) / 2; index++) {
		a[index] = b[index];
	}
	a[index] = '\0';
	cout << "a = " << a << endl;
	delete a;
	delete b;
	return 0;
}