#include <iostream>
#include <vector>
#include <algorithm>

// Bilete

using namespace std;

int main() {

    int n, temp1;
    char c, temp2;
    vector<int> preturi, ans;
    vector<char> clasa;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        preturi.push_back(temp1);
        clasa.push_back(temp2);
    }

    for (int i = 0; i < n; i++) {
        if (clasa[i] == c) {
            ans.push_back(preturi[i]);
        }
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
// done