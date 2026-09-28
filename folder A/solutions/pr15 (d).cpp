#include <iostream>

// Roua

using namespace std;

bool isRoua(string s, int r) {
    int ses{};
    for (char i : s) {
        if (i == 'r') {
            ses++;
        }
    }
    return ses == r - 1;
}

int main() {
    
    int n, r, ans{};
    string colors, temp;
    cin >> n >> r >> colors;
    
    for (int i = 0; i <= n - r; i++) {
        temp = colors.substr(i, r);
        if (isRoua(temp, r)) {
            ans++;
        }
    }
    cout << ans;

    return 0;
}
// done (10th)