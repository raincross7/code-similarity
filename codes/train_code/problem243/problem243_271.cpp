#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
const int INF = 1001001001;

int main(){
    string s,t;
    cin >> s >> t;
    int ans = 0;
    rep(i,s.size())if(s.at(i) == t.at(i)) ans++;
    cout << ans << endl;
}