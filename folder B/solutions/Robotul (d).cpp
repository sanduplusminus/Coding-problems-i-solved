#include <iostream>
#include <vector>
#include <algorithm>

// Robotul

using namespace std;

bool contains(vector<vector<int>> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b) {
            return true;
        }
    }
    return false;
}

int recurse(vector<vector<int>> ion, int x, int y, int steps, vector<vector<int>> checked) {
    // check oob
    if ((x < 0 || x > ion[0].size() - 1) || y < 0 || y > ion.size() - 1) {
        return -1;
    }

    // check wall (1)
    if (ion[y][x] == 1) {
        return -1;
    }

    // check win
    if (x == ion[0].size() - 1 && y == ion.size() - 1) {
        return steps;
    }
    
    // check if checked
    if (contains(checked, vector<int>{x, y})) {
        return -1;
    }
    checked.push_back(vector<int>{x, y});

    vector<int> checks;
    checks.push_back(recurse(ion, x - 1, y - 1, steps + 1, checked));
    checks.push_back(recurse(ion, x, y - 1, steps + 1, checked));
    checks.push_back(recurse(ion, x + 1, y - 1, steps + 1, checked));
    checks.push_back(recurse(ion, x - 1, y, steps + 1, checked));
    // checks.push_back(recurse(ion, x, y, steps + 1));
    checks.push_back(recurse(ion, x + 1, y, steps + 1, checked));
    checks.push_back(recurse(ion, x - 1, y + 1, steps + 1, checked));
    checks.push_back(recurse(ion, x, y + 1, steps + 1, checked));
    checks.push_back(recurse(ion, x + 1, y + 1, steps + 1, checked));

    for (int i = 0; i < checks.size(); i++) {
        if (checks[i] == -1) {
            checks.erase(checks.begin() + i);
            i--;
        }
    }

    if (checks.size() == 0) {
        return -1;
    }
    sort(checks.begin(), checks.end());
    return checks[0];
}

int recursion(vector<vector<int>> ion) {
    return recurse(ion, 0, 0, 1, {});
}

int main() {

    int n, m, temp1;
    vector<int> temp2;
    vector<vector<int>> ion;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> temp1;
            temp2.push_back(temp1);
        }
        ion.push_back(temp2);
        temp2.clear();
    }

    cout << recursion(ion);
    
    return 0;
}
// done, senpai