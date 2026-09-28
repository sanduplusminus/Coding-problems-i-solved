#include <iostream>

using namespace std;

// Compozitie Muzicala, 5-9

int main() {
	int space = 6 * 1024;
	int m;
	int n;
	cin >> m >> n;
	
	int secs = m * 60 + n;
	int comp = secs * 16;

	if (comp < space) {
		cout << "DA";
	}
	else {
		cout << "NU";
	}

	return 0;
}
// done