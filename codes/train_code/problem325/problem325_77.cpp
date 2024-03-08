#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(x)(x).begin(), (x).end() // 昇順ソート
#define rall(v)(v).rbegin(), (v).rend() // 降順ソート
#define INF 1 LL << 60
typedef long long int LL;
typedef long long int ll;
#define pll pair < ll, ll >
#define F first
#define S second
const int MOD = 1000000007;
template < class T > bool chmax(T & a,const T & b) { if (a < b) { a = b; return true; } return false; }
template < class T > bool chmin(T & a,const T & b) { if (a > b) { a = b; return true; } return false; }
// 任意のlogは　対数の底の変換を使う    log(N) / log(任意の底)


int main() {
    LL N,L;cin >> N >> L;
    vector<LL> a(N);
    rep(i,N)cin >> a[i];

    bool ok = false;
    int ans = -1;

    rep(i,N-1){
        LL tmp = a[i] + a[i+1];
        if(tmp >= L){
            ok = true;
            ans = i;
            break;
        }
    }
    
    if(ok){
        cout << "Possible" << endl;
        rep(i,N-1){
            if(i == ans)break;
            cout << i+1 << endl;
        }
        for(int i = N-2;i > ans;i--){
            cout << i+1 << endl;
        }
        cout << ans + 1 << endl;
    }
    else cout << "Impossible" << endl;
}