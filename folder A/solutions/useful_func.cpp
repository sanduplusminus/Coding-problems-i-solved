#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;
// requires quite a few libraries
bool isPalindrome(int x) {
    string p1 = "", p2 = "";
    p1 = to_string(int(x / (pow(10, int(ceil(to_string(x).size() / 2.0))))));
    p2 = to_string(int(x % int(pow(10, int(floor(to_string(x).size() / 2))))));
    // cout << " " << p1 << " " << p2 << " ";
    reverse(p2.begin(), p2.end());
    return p1 == p2;
}
bool isStringPalindrome(string x) {
    string p1 = "", p2 = "";
    if (x.size() % 2 == 0) {
        p1 = x.substr(0, floor(x.size() / 2));
        p2 = x.substr(ceil(x.size() / 2), x.size());
    }
    else {
        p1 = x.substr(0, floor(x.size() / 2));
        p2 = x.substr(ceil(x.size() / 2) + 1, x.size());
    }
    reverse(p2.begin(), p2.end());
    return p1 == p2;
}
// get a specific digit of an int
int getDig(int nr, int dig) {
    return to_string(nr)[dig] - '0';
}
// check if int is prime (not sure it works)
bool isPrime(int nr) {
    if (nr < 2)
        return false;

    for (int i = 2; i * i <= nr; i++) {
        if (nr % i == 0)
            return false;
    }

    return true;
}
// return a vector with a removed element
vector<int> removeE(vector<int> init, int val) {
    // this only returns the new vector, but doesn't change it
    for (int i = 0; i < init.size(); i++) {
        if (init[i] == val) {
            init.erase(init.begin() + i);
            return init;
        }
    }
    return init;
}
// only returns a lowercase version of a string (#include <cctype> required)
string lowr(string str) {
    string ans;
    for (int i = 0; i < str.size(); i++) {
        ans += tolower(str[i]);
    }
    return ans;
}
// get index of an element in a vector
int getIndex(vector<string> vc, string val) {
    for (int i = 0; i < vc.size(); i++) {
        if (vc[i] == val) {
            return i;
        }
    }
    return -1;
}
// return string with the first letter uppercased
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

    return 0;
}