#include <iostream>
#include <vector>

// Reduceri

using namespace std;

bool isValid(int a, int b) {
    return a + a / 3 == b;
}
vector<int> removeE(vector<int> init, int val) {
    // this only returns the new vector, but doesn't change it
    for (int i = 0; i < init.size(); i++) {
        if (init[i] == val) {
            init.erase(init.begin() + i);
            return init;
        }
    }
    return init;
}

int main() {
    
    int n, temp;
    vector<int> prices;
    vector<int> ans;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        prices.push_back(temp);
    }

    // cout << isValid(prices[0], prices[1]);

    for (int i = 0; i < n; i++) {
        if (prices.size() == 0){
            break;
        }
        for (int j = 0; j < n; j++) {
            if (isValid(prices[i], prices[j])) {
                ans.push_back(prices[i]);
                prices = removeE(prices, i);
                prices = removeE(prices, j);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] <<endl;
    }

    return 0;
}
// done (nice)