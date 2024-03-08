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
    int n, h;
    cin >> n >> h;
    vector<P> k(n);
    rep(i,n) cin >> k[i].second >> k[i].first;
    sort(rall(k));
    int maxD = 0;
    rep(i,n) maxD = max(maxD, k[i].second);
    int ans = 0;
    int i = 0; 
    while(i < n){
        if (k[i].first > maxD){
            ans++;
            h -= k[i].first;
        }
        if (h <= 0) break;
        if (k[i].first <= maxD || i == n-1){
            ans += h / maxD;
            if (h % maxD != 0) ans++;
            break;
        }
        i++;
    }
    cout << ans << endl;
    return 0;
}