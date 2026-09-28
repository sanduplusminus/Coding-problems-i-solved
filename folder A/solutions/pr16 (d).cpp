#include <iostream>
#include <vector>
#include <cmath>

// Premiul

using namespace std;

int main() {
    
    int n;
    double temp{}, h = -1;
    vector<double> note;
    vector<int> winners;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        note.push_back(temp);
    }
    

    // check for errors
    if (n < 1 || n > 30) {
        cout << "Error";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (note[i] < 2 || note[i] > 10) {
            cout << "Error";
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if (note[i] > h) {
            h = note[i];
            winners.clear();
            winners.push_back(i);
        }
        else if (note[i] == h) {
            winners.push_back(i);
        }
    }

    for (int i = 0; i < winners.size(); i++) {
        cout << winners[i] + 1 << " ";
    }
    cout << "" <<endl;
    cout << round(h * 200) << " lei";
    
    return 0;
}
// done