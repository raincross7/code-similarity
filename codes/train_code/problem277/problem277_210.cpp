#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1000000007;
//cout << setprecision(20) << 

int main() {
    ll n; cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }

    vector<vector<int>> alphs(n, vector<int>(26, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < s[i].size(); ++j) {
            alphs[i][s[i][j] - 'a'] += 1;
        }
    }
    // for (auto i: alphs) {
    //     for (auto j: i) {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    vector<int> common(26, n);
    for (int i = 0; i < 26; ++i) {
        common[i] = alphs[0][i];
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            common[j] = min(common[j], alphs[i][j]);
        }
    }

    // for (auto i: common) {
    //     cout << i;
    // }
    // cout << endl;
    
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < common[i]; ++j) {
            cout << (char)('a' + i);
        }
    }
    cout << endl;
}