#include <iostream>
#include <vector>
#include <string>

// Circuitele statiei orbitale

using namespace std;

int flip(int i) {
    if (i == 0) {
        return 1;
    }
    else if (i == 1) {
        return 0;
    }
    return -1;
}

vector<int> checkString(string a) {
    int c{}, d{}, nr{};
    char op = ' ';
    
    while (a.size() > 0) {
        if (a.size() == 1) {
            return vector<int>{a[0] - '0', nr};
        }

        if (a[0] == '!') {
            c = flip(a[1] - '0');
            a.erase(0, 2);
            nr++;
        }
        else {
            c = a[0] - '0';
            a.erase(0, 1);
        }

        if (a[0] == '&') {
            op = '&';
        }
        else if (a[0] == '|') {
            op = '|';
        }
        a.erase(0, 2);

        if (a[0] == '!') {
            d = flip(a[1] - '0');
            a.erase(0, 2);
            nr++;
        }
        else {
            d = a[0] - '0';
            a.erase(0, 1);
        }

        if (op == '&') {
            if (c == d) {
                a.insert(a.begin(), '1');
            }
            else {
                a.insert(a.begin(), '0');
            }
        }
        else if (op == '|') {
            if (c != d) {
                a.insert(a.begin(), '1');
            }
            else {
                a.insert(a.begin(), '0');
            }
        }
        nr++;
    }
    return vector<int>{-1, -1};
}

int main() {

    int n;
    string temp;
    vector<string> codes;
    vector<vector<char>> dc;
    vector<int> answers, answers2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        codes.push_back(temp);
    }
    dc.resize(codes.size()); // lmao??
    for (int i = 0; i < codes.size(); i++) {
        for (int j = 0; j < codes[i].size(); j++) {
            dc[i].push_back(codes[i][j]);
        }
    }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < dc[i].size(); j++) {
    //         cout << dc[i][j] <<endl;
    //     }
    // }

    for (int i = 0; i < n; i++) {
        answers.push_back(checkString(codes[i])[0]);
        answers2.push_back(checkString(codes[i])[1]);
    }
    for (int i = 0; i < n; i++) {
        cout << answers[i] << " (" << answers2[i] << ")" <<endl;
    }

    return 0;
}
// done