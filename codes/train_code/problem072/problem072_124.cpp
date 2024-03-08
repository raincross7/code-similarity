#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define REP(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
#define chmax(x, y) x = max(x, y)
#define chmin(x, y) x = min(x, y)
using namespace std;
typedef pair<int, int> P;
const int mod = 1000000007;
const int INF = 1e12;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int l = 0;
    for(int i = 1;; i++){
        if(n <= i * (i + 1) / 2){
            l = i; break;
        }
    }
    vector<int> ans;
    for(int i = l; i >= 1; i--){
        if(n >= i){
            ans. push_back(i);
            n -= i;
        }
    }
    for(int ii = 0; ii < ans.size(); ii++){
        cout << ans[ii] << endl;
    }
}