#include <iostream>
#include <vector>

// Lunile preferate

using namespace std;

int main() {

    char comp;
    int t, n, temp2;
    string temp1;
    vector<string> l_luni, answers, answer, luni = {"ianuarie", "februarie", "martie", "aprilie", "mai", "iunie", "iulie", "august", "septembrie", "octombrie", "noiembrie", "decembrie"};
    vector<int> l_grade;
    cin >> comp >> t;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp1 >> temp2;
        l_luni.push_back(temp1);
        l_grade.push_back(temp2);
    }
    for (int i = 0; i < n; i++) {
        if (comp == '<') {
            if (l_grade[i] < t) {
                answers.push_back(l_luni[i]);
            }
        }
        else if (comp == '>') {
            if (l_grade[i] > t) {
                answers.push_back(l_luni[i]);
            }
        }
    }

    for (int i = 0; i < luni.size(); i++) {
        for (int j = 0; j < answers.size(); j++) {
            if (luni[i] == answers[j]) {
                answer.push_back(luni[i]);
                break;
            }
        }
    }

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] <<endl;
    }
    
    return 0;
}
// done