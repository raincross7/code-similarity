#include <bits/stdc++.h>
#define rep(i,a,b) for(int i = (a); i <= (b); i++)
#define rng(a) a.begin(), a.end()
#define ina(n,a) cin >> n; for(int i = 1; i <= n; i++) cin >> a[i]
#define sz(x) (int)(x).size()
#define se second
#define fi first
#define prev            coyhhhhhhyoc    
#define next          sdNNNmNNNNNNNmds  
#define y0           hNNNNy_yNNNNNN_sNh
#define y1          mNNNNNdtdNNNNNNtsNNm
#define yn          mNNNNNNNNy___smNNNms
#define tm            oooooosyysooooot 
#define read               tyhyt        
#define rank              ytmNmo         
#define index              yyy
#define pb push_back
#define pcnt __builtin_popcountll
#define rrep(i,a,b) for(int i = (b); i >= (a); i--)
#define rall(x,a) for(auto x : a)
#define MOD 1000000007
#define endl "\n"
typedef long long ll;
using namespace std;

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m, k;
    cin >> m >> k;
    int n = 1 << m;
    if(m == 1) {
        if(k == 0) {
            cout << "0 0 1 1" << endl;
        } else {
            cout << "-1" << endl;
        }
        return 0;
    } else if(k >= n) {
        cout << -1 << endl;
        return 0;
    } else if(k == 0) {
        rep(i, 0, n - 1) {
            cout << i << " " << i << " ";
        }
        cout << endl;
        return 0;
    }
    cout << 0 << " " << k << " " << 0 << " ";
    rep(i, 1, n - 1) {
        if(i == k) continue;
        cout << i << " ";
    }
    cout << k << " ";
    rrep(i, 1, n - 1) {
        if(i == k) continue;
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
