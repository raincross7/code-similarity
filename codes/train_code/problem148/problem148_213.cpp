#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, a, b) for(int i = a; i < b; i++)
#define  all(x) (x).begin(),(x).end()     // 昇順ソート
#define  rall(v) (v).rbegin(), (v).rend() // 降順ソート
#define  FastIO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;
using P = pair<int,int>;
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a=b; return true; } return false; }

int main(){
    int n;
    cin >> n;
    vector<ll> a(n), sum(n);
    rep(i,n) cin >> a[i];
    sort(all(a));
    sum[0] = a[0];
    rep(i,n-1) sum[i+1] = sum[i] + a[i+1];
    ll ans = 1;
    for(int i = n-1; i > 0; i--){
        if (a[i] > sum[i-1] * 2) break;
        ans++;
    }
    cout << ans << endl;
    return 0;
}