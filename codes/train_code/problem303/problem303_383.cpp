# include <iostream>
# include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] != t[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}