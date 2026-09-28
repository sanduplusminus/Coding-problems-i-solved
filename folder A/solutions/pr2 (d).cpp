#include <iostream>
#include <vector>

// Virusul 13

using namespace std;

int getAfterWD(int wd1, int month, bool bisect) {
    vector<int> days = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };
    if (bisect) {
        days[1]++;
    }
    return (days[month] + wd1 - 1) % 7 + 1;
}

int main() {
    
    int n, d, ans{};
    cin >> n >> d;
    vector<int> answer;
    int first_day = d;

    for (int i = 0; i < 12; i++) {
        if (first_day == 7) {
            answer.push_back(i + 1);
        }
        first_day = getAfterWD(first_day, i, (n % 4 == 0 && n % 100 != 0) || n % 400 == 0);
    }
    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }

    return 0;
}
// done (worst shit ive ever done)