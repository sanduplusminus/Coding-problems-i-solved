#include <iostream>

// Tichetul

using namespace std;

int main() {
    
    int a, i, a_s{}, i_s{};
    cin >> a >> i;

    for (char c : to_string(a)) {
        a_s += c - '0';
    }
    for (char c : to_string(i)) {
        i_s += c - '0';
    }
    if (a_s > i_s) {
        cout << a_s;
    }
    else {
        cout << i_s;
    }
    
    return 0;
}
// done