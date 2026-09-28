#include <iostream>
#include <vector>
#include <algorithm>

// Recrutare in armata

using namespace std;

int getHighestElementIndex(vector<int> v) {
    int h_n{}, h_i{};
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > h_n) {
            h_n = v[i];
            h_i = i;
        }
    }
    return h_i;
}

int main() {

    int n, m, k, temp, ans{};
    cin >> n >> m >> k;
    vector<int> a_sc;
    vector<int> b_sc;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        a_sc.push_back(temp);
        cin >> temp;
        b_sc.push_back(temp);
    }
    // return -1 in for invalid case
    if (n < m + k) {
        cout << -1;
        return 0;
    }

    // sort(a_sc.begin(), a_sc.end());
    // sort(b_sc.begin(), b_sc.end());
    for (int i = 0; i < m; i++) {
        temp = getHighestElementIndex(a_sc);
        ans += a_sc[temp];
        a_sc.erase(a_sc.begin() + temp);
        b_sc.erase(b_sc.begin() + temp);
    }
    for (int i = 0; i < b_sc.size(); i++) {
        ans += b_sc[b_sc.size() - 1];
        b_sc.pop_back();
        a_sc.pop_back();
    }
    cout << ans;

    
    return 0;
}
// wrong