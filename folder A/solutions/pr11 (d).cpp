#include <iostream>

// Telegrama

using namespace std;

int main() {
    
    string inp;
    char last;
    int ans{};
    getline(cin, inp);

    for (int i : inp) {
        if (ans == 0) {
            ans = 1;
        }
        if (i != ' ' && last == ' ') {
            ans++;
        }
        last = i;
    }
    cout << ans;


    return 0;
}
// done