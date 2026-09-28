#include <iostream>
#include <vector>

// Visul

using namespace std;

int main() {

    int n, m, k, l, temp, pr{}, t{};

    cin >> n >> m;
    cin >> k >> l;
    vector<vector<int>> placi(n, vector<int>(m));
    vector<vector<int>> vtemp;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> placi[i][j];
        }
    }
    
    vtemp = placi;
    pr = 1;
    for (int i = 0; i < m; i++) { // i loops through ints inside vectors
        for (int j = 0; j < n; j++) { // j loops through vectors of ints
            if (i >= int(placi.size() / 2)) {
                return 0;
            }
            pr *= placi[j][i];
            placi[j][i] = 1;
        }
    }
    if (pr % k == 0) {
        t++;
    }
    cout << t;

    return 0;
}