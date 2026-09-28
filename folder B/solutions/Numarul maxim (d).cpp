#include <iostream>
#include <vector>
#include <string>

// Numarul maxim

using namespace std;

vector<int> intToDigits(int nr) {
    string snr = to_string(nr);
    vector<int> r;
    for (int i = 0; i < snr.size(); i++) {
        r.push_back(snr[i] - '0');
    }
    return r;
}

vector<int> swapVI(vector<int> v, int i, int j) { // Vector of Ints
    int tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
    return v;
}

int intvectortoint(vector<int> v) {
    string ans;
    for (int i = 0; i < v.size(); i++) {
        ans += v[i] + '0';
    }
    return stoi(ans);
}

int main() {

    int nr, highest{};
    cin >> nr;
    vector<int> digits = intToDigits(nr);
    
    // for (int i = 0; i < digits.size(); i++) {
    //      cout << swapVI(digits, 0, 1)[i];
    // }

    for (int i = 0; i < digits.size(); i++) {
        for (int j = 0; j < digits.size(); j++) {
            if (intvectortoint(swapVI(digits, i, j)) > highest) {
                highest = intvectortoint(swapVI(digits, i, j));
            }
        }
    }
   cout << highest;
    
    return 0;
}
// done