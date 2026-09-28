#include <iostream>
#include <string>

// Divizori.

using namespace std;

int pushIDX1(int x) {
    string xs = to_string(x);
    xs.push_back(xs[0]);
    xs[0] = '0';
    return stoi(xs);
}
int getDivCount(int x) {
    int sm{};
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            sm++;
        }
    }
    return sm;
}

int main() {
    
    int n, bigg{}, ans{};
    cin >> n;
    
    for (int i = 0; i < to_string(n).size(); i++) {
        n = pushIDX1(n);
        if (getDivCount(n) > bigg) {
            bigg = getDivCount(n);
            ans = n;
        }
    }
    cout << ans;

    return 0;
}
// done (to come back to)