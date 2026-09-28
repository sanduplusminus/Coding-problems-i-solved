#include <iostream>

// Hotelul.

using namespace std;

int main() {
    
    int n, od2{}, od3{};
    cin >> n;

    if (n == 1 || n == 2) {
        od2 = 1;
    }
    else if (n >= 3) {
        if (n % 2 == 0) {
            od2 = n / 2;
        }
        else {
            od2 = (n - 3) / 2;
            od3 = 1;
        }
    }
    cout << od2 << " " << od3;
    
    return 0;
}
// done