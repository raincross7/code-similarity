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

int main(){
    int n;
    cin >> n;
    VP ab(n), cd(n);
    rep(i,n) cin >> ab[i].first >> ab[i].second;
    rep(i,n) cin >> cd[i].first >> cd[i].second;

    sort(all(ab));
    sort(all(cd));

    VI used(n);
    int ans = 0;
    rrep(i, n){
        int usej = n+1, dis = 2 * n;
        rrep(j,n){
            if (ab[i].first >= cd[j].first) break;
            if (used[j] == 1) continue;
            if (ab[i].first < cd[j].first && ab[i].second < cd[j].second){
                if (chmin(dis, cd[j].second - ab[i].second)) usej = j;
            }
        }
        if (usej != n+1){
            used[usej] = 1;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}