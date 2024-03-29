#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0; i < (n); ++i)
using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    map<int, int> mp;
    rep(i,n){
        int a;
        cin >> a;
        ++mp[a];
    }
    int ans = 0;
    for(auto e : mp){
        if(e.first < e.second) ans += e.second - e.first;
        if(e.first > e.second) ans += e.second;
    }
    cout << ans << endl;
    return 0;
}
