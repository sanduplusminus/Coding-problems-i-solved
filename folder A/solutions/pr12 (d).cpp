#include <iostream>

// Problema Patrata

using namespace std;

int main() {
    
    int m, ans{}, temp;
    cin >> m;

    while (m > 0) {
        temp = 2;
        while (temp * temp <= m) {
            temp++;
        }
        temp--;
        m -= temp * temp;
        ans++;
    }
    cout << ans;


    return 0;
}
// done