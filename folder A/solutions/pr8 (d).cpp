#include <iostream>

// Acvariu.

using namespace std;

int main() {
    
    int n, v, ans{};
    cin >> n >> v;

    int fish_l = n, vol_l = v, ftf{};
    while (fish_l > 0) {
        if (vol_l >= 0) {
            ftf++;
        }
        fish_l--;
        vol_l -= 3;
    }
    if (vol_l >= 0) {
        cout << "NU";
    }
    else {
        cout << n - ftf + 1;
    }


    return 0;
}
// done