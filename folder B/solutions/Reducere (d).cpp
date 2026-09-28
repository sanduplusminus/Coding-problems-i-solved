#include <iostream>
#include <vector>
#include <string>

// Reducere
// aceasta problema m-a zăpăcit

using namespace std;

void intToVector(int nr, vector<int>& v) {
    for (int i = 0; i < to_string(nr).size(); i++) {
        v.push_back(to_string(nr)[i] - '0');
    }
}

int main() {

    int p, k;
    string ans;
    vector<int> d, ans_v;
    cin >> p >> k;
    intToVector(p, d);

    ans_v.push_back(d[0]);
    for (int i = 1; i < d.size(); i++) {
        while (ans_v.back() > d[i] && k > 0) {
            ans_v.pop_back();
            k--;
        }
        ans_v.push_back(d[i]);
    }
    for (int i = 0; i < ans_v.size(); i++) {
        ans += char(ans_v[i] + '0');
    }
    cout << stoi(ans);
    
    return 0;
}
// done with chatgpt (stack problem wdyw)