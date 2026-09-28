#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>

// Numere "interpalindroame".

using namespace std;

bool isPalindrome(string x) {
    string p1 = "", p2 = "";
    if (x.size() % 2 == 0) {
        p1 = x.substr(0, floor(x.size() / 2));
        p2 = x.substr(ceil(x.size() / 2), x.size());
    }
    else {
        p1 = x.substr(0, floor(x.size() / 2));
        p2 = x.substr(ceil(x.size() / 2) + 1, x.size());
    }
    reverse(p2.begin(), p2.end());
    return p1 == p2;
}
bool isValid(int x) {
    bool a = false, b = false;
    string c1 = to_string(x - 1), c2 = to_string(x + 1);
    for (int i = 0; i < 10; i++) {
        if (isPalindrome(c1) && not a) {
            a = true;
        }
        if (isPalindrome(c2) && not b) {
            b = true;
        }
        c1 = '0' + c1;
        c2 = '0' + c2;
    }
    return a && b;
}

int main() {
    
    int t, temp1, temp2;
    vector<vector<int>> nums;
    vector<int> ans;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> temp1 >> temp2;
        nums.push_back({temp1, temp2});
        ans.push_back(0);
    }
    
    for (int i = 0; i < nums.size(); i++) {
        for (int j = nums[i][0]; j <= nums[i][1]; j++) {
            if (isValid(j)) {
                ans[i]++;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] <<endl;
    }
    
    return 0;
}
// done