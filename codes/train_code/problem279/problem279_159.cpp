#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    bool f = true;
    while (f) {
        f = false;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i-1]) {
                s.erase (i-1, 2);
                ans += 2;
                i --;
                f = true;
            }
        }
    }
    cout << ans << endl;
}