#include <iostream>
#include <vector>
#include <cctype>

// Sondajul

using namespace std;

bool isInV(vector<string> vc, string val) {
    for (int i = 0; i < vc.size(); i++) {
        if (val == vc[i]) {
            return true;
        }
    }
    return false;
}
string lowr(string str) {
    string ans;
    for (int i = 0; i < str.size(); i++) {
        ans += tolower(str[i]);
    }
    return ans;
}
int getIndex(vector<string> vc, string val) {
    for (int i = 0; i < vc.size(); i++) {
        if (vc[i] == val) {
            return i;
        }
    }
    return -1;
}
string uppercase(string str) {
    string ans;
    for (int i = 0; i < str.size(); i++) {
        if (i == 0) {
            ans += toupper(str[i]);
        }
        else {
            ans += str[i];
        }
    }
    return ans;
}

int main() {
    
    int n, h_v = -1,  h_i = -1;
    string temp{};
    bool temp2 = false, noso = false;
    vector<string> weekdays = {"luni", "marti", "miercuri", "joi", "vineri", "sambata", "duminica"};
    vector<int> v_numbers = {0, 0, 0, 0, 0, 0, 0};
    vector<string> votes;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        temp = lowr(temp);
        if (isInV(weekdays, temp)) {
            votes.push_back(temp);
        }
    }

    // repair the size (not really needed lol)
    n = votes.size();
    
    for (int i = 0; i < votes.size(); i++) {
        if (isInV(weekdays, votes[i])) {
            v_numbers[getIndex(weekdays, votes[i])]++;
        }
    }
    // for (int i = 0; i < v_numbers.size(); i++) {
    //     cout << weekdays[i] << ": " << v_numbers[i] <<endl;
    // }

    for (int i = 0; i < v_numbers.size(); i++) {
        if (v_numbers[i] >= h_v) {
            if (h_i != i && h_i != -1 && v_numbers[i] == h_v) {
                noso = true;
            }
            h_v = v_numbers[i];
            h_i = i;
        }
    }

    if (noso || h_i == -1) {
        cout << "No solution";
    }
    else {
        cout << uppercase(weekdays[h_i]);
    }
    
    return 0;
}
// done