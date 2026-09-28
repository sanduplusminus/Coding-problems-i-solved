#include <iostream>
#include <vector>

// Panglica

using namespace std;

int smIndex(vector<vector<int>> a) {
    int sm{}, v_sm = a[0][0] + a[0][1];
    for (int i = 1; i < a.size(); i++) {
        if (a[i][0] + a[i][1] < v_sm) {
            v_sm = a[i][0] + a[i][1];
            sm = i;
        }
    }
    return sm;
}

int main() {
    int n, c;
    vector<int> colors;
    vector<vector<int>> answers;
    cin >> n >> c;

    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        colors.push_back(temp);
    }
    
    // to be continued --- 
    // i continued lol

    for (int up = 0; up < n; up++) {
        for (int down = 0; down < n; down++) {
            if (colors[up] == colors[colors.size() - 1 - down]) {
                answers.push_back({up, down});
            }
        }
    }
    // cout << answers[smIndex(answers)][0] << " " << answers[smIndex(answers)][1] <<endl;
    int r1{}, r2{}, r3{}, r4{};
    r3 = answers[smIndex(answers)][0];
    r4 = answers[smIndex(answers)][1];
    r2 = colors[r3];
    r1 = colors.size() - r4 - r3;
    

    // cout << "placeholder" <<endl;
    // cout << colors[up] <<endl;
    // cout << up <<endl;
    // cout << down <<endl;
    cout << r1 <<endl;
    cout << r2 <<endl;
    cout << r3 <<endl;
    cout << r4;

    return 0;
}
// done