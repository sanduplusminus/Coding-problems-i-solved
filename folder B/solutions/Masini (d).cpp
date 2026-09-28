#include <iostream>

// Masini

using namespace std;

int main() {

    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << "PAR" <<endl;
    }
    else {
        cout << "IMPAR" <<endl;
    }

    int temp1{};
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            temp1++;
        }
    }
    if (temp1 > 2 && n > 1) {
        cout << "COMPUS" <<endl;
    }
    else {
        cout << "PRIM" <<endl;
    }

    int temp2{};
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            temp2 += i;
        }
    }
    if (temp2 < n) {
        cout << "DEFICIENT" <<endl;
    }
    else if (temp2 > n) {
        cout << "ABUNDENT" <<endl;
    }
    else {
        cout << "PERFECT" <<endl;
    }

    if (n % 3 == 0) {
        cout << "SE DIVIDE CU 3" <<endl;
    }
    if (n % 5 == 0) {
        cout << "SE DIVIDE CU 5" <<endl;
    }
    if (n % 9 == 0) {
        cout << "SE DIVIDE CU 9" <<endl;
    }
    if (n % 11 == 0) {
        cout << "SE DIVIDE CU 11" <<endl;
    }
    
    return 0;
}
// done