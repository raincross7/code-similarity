#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; i < ll(n); i++)

int main() {
    int n, k;
    string s;
    cin >> n >> s >> k;
    k--;
    rep(i,n){
        cout << (s[k] == s[i] ? s[i] : '*');
    }
    cout << endl;
}