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
    vector<ll> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    vector<ll> diff(n);
    rep(i,n) diff[i] = a[i] - b[i];
    sort(rall(diff));

    ll total = 0, ans = 0;
    rep(i,n) {
        if (diff[i] < 0){
            total += diff[i];
            ans++;
        } 
    }
    ll i = 0;
    while(total < 0) {
        if (diff[i] <= 0){
            cout << -1 << endl;
            return 0;
        }
        total += diff[i];
        i++;
        ans++;
    }
    cout << ans << endl;
    return 0;
}