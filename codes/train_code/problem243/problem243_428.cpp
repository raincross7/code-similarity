#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s, t;
    cin >> s >> t;
    int ct = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t[i]) {
            ct++;
        }
    }
    cout << ct;
}