#include "bits/stdc++.h"
#pragma GCC optimize "03"
using namespace std;

#define int long long int
#define double long double
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define rep(i,a,b) for (int i = a; i < b; ++i)
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef LOCAL
#define dbg(...) ;
#define endl '\n'
#endif

const int inf = 1e15;
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;



signed main(){
    IOS;
    string s, t;
    cin >> s >> t;
    int flag = 1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != t[i]) flag = 0;
    }
    if (flag) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}