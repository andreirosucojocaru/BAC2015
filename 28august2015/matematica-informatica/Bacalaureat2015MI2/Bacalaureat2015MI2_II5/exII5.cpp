using namespace std;

#define MAXSIZE 100

#include <iostream>
#include <string>

int main() {
	char *s;
	int k, consonant_found = 0, vowel_found = 0;
	s = new char[MAXSIZE];
	cout << "s="; cin >> s;
	for (k = 0; k < strlen(s); k++) {
		switch (s[k]) {
		case 'a':
		case 'e':
		case 'o':
		case 'u':
			vowel_found = 1;
		case 'i':
			break;
		default:
			consonant_found = 1;
			break;
		}
	}
	if (consonant_found && !vowel_found) {
		cout << "DA" << endl;
	}
	else {
		cout << "NU" << endl;
	}
	delete s;
	return 0;
}