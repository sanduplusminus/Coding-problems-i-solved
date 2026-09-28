#include <iostream>

// Ecuatia Misterioasa.

using namespace std;

bool check(int x, int y, int n) {
    return x + y + x * y == n;
}
int main() {
    
    int n, ans{};
    cin >> n;
    
    for (int x = 0; x < n * 2; x++) {
        for (int y = 0; y < n * 2; y++) {
            // cout << x << " " << y <<endl;
            if (check(x, y, n)) {
                ans++;
                // cout << "right" <<endl;
            }
        }
    }
    cout << ans;
    
    return 0;
}
// done