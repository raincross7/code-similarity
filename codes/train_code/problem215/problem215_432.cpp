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

int dp[105][4][2];

int main(){
    string s;
    int K;
    cin >> s >> K;
    int n = s.size();
    dp[0][0][0] = 1;
    rep(i,n) rep(j,4) rep(k,2){
        int nd = s[i] - '0';
        rep(d, 10){
            int ni = i+1, nj = j, nk = k;
            if (d != 0) nj++;
            if (nj > K) continue;
            if (k == 0){
                if (d > nd) continue;
                else if (d < nd) nk++;
            }
            dp[ni][nj][nk] += dp[i][j][k];
        }
    }
    int ans = dp[n][K][0] + dp[n][K][1];
    cout << ans << endl;
    return 0;
}