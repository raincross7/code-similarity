#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii =  pair<int, int>;
using pll =  pair<long long, long long>;
constexpr char ln =  '\n';
constexpr long long MOD = 1000000007LL;
constexpr long long INF = 1000000009LL;
#define all(x) (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }


int main(){
    string s; cin >> s;
    vector<string> lst = {"maerd", "remaerd", "esare", "resare"};

    reverse(all(s));
    string ss;
    rep(i, s.size()){
        ss += s[i];
        if(count(all(lst), ss)> 0)ss = "";
    }

    if(ss == "") cout << "YES" << ln;
    else cout << "NO" << ln;
}
