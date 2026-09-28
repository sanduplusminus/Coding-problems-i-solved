#include <iostream>
#include <cmath>

// Codul-ABCD.

using namespace std;

int main() {
    
    int n, p1{}, p2{}, sm{};
    cin >> n;

    p1 = n / 100;
    p2 = n % 100;
    sm = pow(p1, 2) + pow(p2, 2);

    if (sm % 7 == 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
// done