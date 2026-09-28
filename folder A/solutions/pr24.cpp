#include <iostream>
#include <vector>
#include <cmath>

// Cumparaturi.

using namespace std;

vector<int> getHighest(vector<int> nums) {
    int nas{}, h = -1;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > h) {
            h = nums[i];
            nas = i;
        }
    }
    return {nas, h};
}

int main() {
    
    int n, k, temp, r{}, ans{};
    vector<int> prod;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        prod.push_back(temp);
    }
    r = floor(n / k);
    
    while (prod.size() > r + 1) {
        
        ans += getHighest(prod)[1];
        prod.erase(prod.begin() + getHighest(prod)[0]);
        prod.erase(prod.begin() + getHighest(prod)[0]);
    }
    ans += getHighest(prod)[1];
    prod.erase(prod.begin() + getHighest(prod)[0]);
    ans += getHighest(prod)[1];
    prod.erase(prod.begin() + getHighest(prod)[0]);
    prod.erase(prod.begin() + getHighest(prod)[0]);

    cout << ans;

    return 0;
}
// not done