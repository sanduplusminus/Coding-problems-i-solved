#include <iostream>
#include <vector>

// Expresii valide

using namespace std;

vector<int> checkP(string a) {
    int p1{}, p2{}, p3{}, cp1{}, cp2{}, cp3{};
    vector<char> store;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(') {
            p1++;
            store.push_back('(');
        }
        else if (a[i] == ')') {
            p1--;
            cp1++;
            if (store.size() == 0 || store.back() != '(') {
                return vector<int>{-1, -1, -1};
            }
            store.pop_back();
        }
        else if (a[i] == '[') {
            p2++;
            store.push_back('[');
        }
        else if (a[i] == ']') {
            p2--;
            cp2++;
            if (store.size() == 0 || store.back() != '[') {
                return vector<int>{-1, -1, -1};
            }
            store.pop_back();
        }
        else if (a[i] == '{') {
            p3++;
            store.push_back('{');
        }
        else if (a[i] == '}') {
            p3--;
            cp3++;
            if (store.size() == 0 || store.back() != '{') {
                return vector<int>{-1, -1, -1};
            }
            store.pop_back();
        }
    }
    if (p1 == 0 && p2 == 0 && p3 == 0) {
        return vector<int>{cp1, cp2, cp3};
    }
    else {
        return vector<int>{-1, -1, -1};
    }
}

int main() {

    int n;
    string temp;
    vector<string> c;
    vector<vector<int>> answer;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        c.push_back(temp);
    }

    // answer.resize(c.size());
    for (int i = 0; i < n; i++) {
        answer.push_back(checkP(c[i]));
    }
    for (int i = 0; i < n; i++) {
        if (answer[i][0] == -1) {
            cout << "NU" <<endl;
        }
        else {
            cout << "DA";
            cout << " (" << answer[i][0] << ") ";
            cout << " [" << answer[i][1] << "] ";
            cout << " {" << answer[i][2] << "} " <<endl;
        }
    }
    
    
    return 0;
}
// done