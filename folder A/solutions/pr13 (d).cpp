#include <iostream>

// Problema bibliotecarului.

using namespace std;


bool isPrime(int nr) {
    if (nr < 2)
        return false;

    for (int i = 2; i * i <= nr; i++) {
        if (nr % i == 0)
            return false;
    }

    return true;
}
int main() {
    
    int n, ans1{}, ans2{};
    cin >> n;

    for (int i = 3; i <= n + 2; i++) {
        if (isPrime(i)) {
            ans2 += to_string(i).length();
        }
        else {
            ans1++;
        }
    }
    
    cout << ans1 <<endl;
    cout << ans2;

    return 0;
}
// done