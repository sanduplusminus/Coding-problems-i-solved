#include <iostream>

// Spargerea codului

using namespace std;

bool isPrime(int a) {
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (isPrime(i) && isPrime(i) && i * j == n) {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "failed";
    
    return 0;
}
// done