#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rrep(i, n) for(int i = n-1; i >= 0; i--)
#define  all(x) (x).begin(),(x).end()     // 昇順ソート
#define  rall(v) (v).rbegin(), (v).rend() // 降順ソート
#define  FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;
using P = pair<int,int>;
using VI = vector<int>;
using VVI = vector<vector<int>>;
using VL = vector<ll>;
using VVL = vector<vector<ll>>;
using VP = vector<P>;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return true; } return false; }

const int MAX = 1e6+5;

int main(){
    int n;
    cin >> n;
    VI a(n);
    rep(i,n) cin >> a[i];
    VI d(MAX);
    rep(i,n){
        if (d[a[i]] > 2) continue;
        for(int j = a[i]; j <= MAX; j += a[i]){
            d[j]++;
        }
    }
    int ans = 0;
    rep(i,n){
        if (d[a[i]] < 2) ans++;
    }
    cout << ans << endl;
    return 0;
}