#include <iostream>
#include <vector>
#include <string>

// Vulpea si Lupul.

using namespace std;

int getBiggest(vector<vector<char>> digits) {
    int idx{}, bt1 = digits[0][0] - '0';
    for (int i = 0; i < digits.size(); i++) {
        if (digits[i][0] - '0' > bt1) {
            bt1 = digits[i][0] - '0';
            idx = i;
        }
        else if (digits[i][0] - '0' == bt1) {
            for (int j = 1; j < digits[i].size(); j++) {

                if (j >= digits[idx].size()) {
                    idx = i;
                    break;
                }

                if (digits[i][j] > digits[idx][j]) {
                    idx = i;
                    break;
                }
                else if (digits[i][j] < digits[idx][j]) {
                    break;
                }
            }
        }
    }
    return idx;
}

int delTwo(int nr) {
    string numb = to_string(nr), h;
    h = numb;
    int ans = stoi(h.substr(0, 0) + h.substr(2, h.size() - 1));
    for (int i = 0; i < numb.size() - 1; i++) {
        h = numb;
        if (stoi(h.substr(0, i) + h.substr(i + 2, h.size() - 1)) > ans) {
            ans = stoi(h.substr(0, i) + h.substr(i + 2, h.size() - 1));
        }
    }
    return ans;
}

int main() {
    
    int n, temp1;
    string temp, ans;
    vector<string> nums;
    vector<vector<char>> digits;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        nums.push_back(to_string(delTwo(stoi(temp))));
        // cout << nums[i] << " ";
    }
    digits.resize(nums.size());
    for (int i = 0; i < nums.size(); i++) {
        for (int j = 0; j < nums[i].size(); j++) {
            digits[i].push_back(nums[i][j]);
        }
    }

    while (!nums.empty()) {
        temp1 = getBiggest(digits);
        ans += nums[temp1];
        digits.erase(digits.begin() + temp1);
        nums.erase(nums.begin() + temp1);
    }
    cout << ans;

    return 0;
}
// done