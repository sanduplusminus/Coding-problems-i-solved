#include <iostream>
#include <vector>

// Vecinii din sat

using namespace std;

int main() {
    
    int n, v, ans = -1;
    vector<vector<int>> pairs;
    cin >> n >> v;

    for (int i = 0; i < n; i++) {
        pairs.push_back({n - i, n + i + 1});
    }
    // for (int i = 0; i < pairs.size(); i++) {
    //     cout << pairs[i][0] << " " << pairs[i][1] <<endl;
    // }
    for (int i = 0; i < pairs.size(); i++) {
        if (pairs[i][0] == v) {
            ans = pairs[i][1];
        }
        else if (pairs[i][1] == v) {
            ans = pairs[i][0];
        }
    }
    cout << ans;
    
    return 0;
}
// done