#include <bits/stdc++.h>
#include <math.h>
#define rep(i,n) for (int i = 0; i< (n); i++)
#define REP(i,n) for (int i = 1; i<= (n); i++)
#define MAX_MOD 1000000007LL
#define MOD 998244353LL
const long double PI = acos(-1);
using ll = long long;
using ld = long double;
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    rep(i,s.size()) {
        if (s[i] == 'x') {
            cnt++;
        }
    }
    if (cnt >= 8) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}