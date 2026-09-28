#include <iostream>
#include <cmath>

// Figuri

using namespace std;

int main() {
    int l, n;

    cin >> l >> n;

    for (int t = 0; t <= floor(l / 3); t++) {
        for (int s = 0; s <= floor(l / 4); s++) {
            if (abs(t - s) == n && t * 3 + s * 4 == l) {
                cout << t << " " << s;
                return 0;
            }
        }
    }
    
    return 0;
}
// done (i think)