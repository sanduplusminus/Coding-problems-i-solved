#include <iostream>

// Depozit Bancar.

using namespace std;

int main() {
    
    int s, d;
    cin >> s >> d;
    int a = s;
    int ans = 0;

    while (a < s*2) {
        a += a * d / 100;
        ans++;
    }
    cout << ans;

    return 0;
}
// done