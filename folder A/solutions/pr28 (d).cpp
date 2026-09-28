#include <iostream>
#include <vector>

// Club

using namespace std;

bool pairInVector(int p1, int p2, vector<vector<int>> dones) {
    for (int i = 0; i < dones.size(); i++) {
        if (vector<int>{p1, p2} == dones[i] || vector<int>{p2, p1} == dones[i]) {
            return true;
        }
    }
    return false;
}

bool rightPair(vector<int> a, vector<int> b) {
    int count{};
    for (int i = 0; i < 3; i++) {
        if (a[i] == b[i]) {
            count++;
        }
    }
    return count == 1;
}

int main() {

    int n, temp1, temp2, temp3, ans{};
    vector<vector<int>> note;
    vector<vector<int>> dones;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp1 >> temp2 >> temp3;
        note.push_back({temp1, temp2, temp3});
    }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << note[i][j] << " ";
    //     }
    //     cout << "" <<endl;
    // }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (rightPair(note[i], note[j]) && not pairInVector(i, j, dones)) {
                ans++;
                dones.push_back({i, j});
            }
        }
    }
    cout << ans;
    
    return 0;
}
// done YESYESYEEEEEESSSS