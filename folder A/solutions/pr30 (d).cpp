#include <iostream>
#include <vector>

// Calul

using namespace std;

bool isAttacked(vector<vector<int>> rooks, vector<int> pos) {
    for (int i = 0; i < rooks.size(); i++) {
        if (rooks[i][0] == pos[0] || rooks[i][1] == pos[1]) {
            return true;
        }
    }
    return false;
}

bool pairIn(vector<int> ths, vector<vector<int>> in) {
    for (int i = 0; i < in.size(); i++) {
        if (ths == in[i]) {
            return true;
        }
    }
    return false;
}

bool check(vector<vector<int>> rooks, vector<int> data, vector<vector<int>> visited, int depth) {
    // check depth
    if (depth > 15) {
        return false;
    }
    depth++;
    // check if square attacked
    if (isAttacked(rooks, {data[0], data[1]})) {
        return false;
    }
    // check if square visited
    if (pairIn({data[0], data[1]}, visited)) {
        return false;
    }
    // check if square is target
    if (data[0] == data[2] && data[1] == data[3]) {
        return true;
    }
    visited.push_back({data[0], data[1]});
    if (check(rooks, {data[0] - 1, data[1] - 2, data[2], data[3]}, visited, depth)) {
        return true;
    }
    if (check(rooks, {data[0] - 1, data[1] + 2, data[2], data[3]}, visited, depth)) {
        return true;
    }
    if (check(rooks, {data[0] + 1, data[1] - 2, data[2], data[3]}, visited, depth)) {
        return true;
    }
    if (check(rooks, {data[0] + 1, data[1] + 2, data[2], data[3]}, visited, depth)) {
        return true;
    }
    
    if (check(rooks, {data[0] - 2, data[1] - 1, data[2], data[3]}, visited, depth)) {
        return true;
    }
    if (check(rooks, {data[0] - 2, data[1] + 1, data[2], data[3]}, visited, depth)) {
        return true;
    }
    if (check(rooks, {data[0] + 2, data[1] - 1, data[2], data[3]}, visited, depth)) {
        return true;
    }
    if (check(rooks, {data[0] + 2, data[1] + 1, data[2], data[3]}, visited, depth)) {
        return true;
    }
    return false;
}

bool isValid(vector<vector<int>> rooks, vector<int> data) {
    return check(rooks, data, {}, 0);
}

int main() {

    int n, q, temp1, temp2, temp3, temp4;
    vector<vector<int>> rooks, gdata;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        rooks.push_back({temp1, temp2});
    }
    for (int i = 0; i < q; i++) {
        cin >> temp1 >> temp2 >> temp3 >> temp4;
        gdata.push_back({temp1, temp2, temp3, temp4});
    }
    for (int i = 0; i < gdata.size(); i++) {
        if (isValid(rooks, gdata[i])) {
            cout << "DA" <<endl;
        }
        else {
            cout << "NU" <<endl;
        }
    }
    
    return 0;
}
// done (crazy, i was crazy once)