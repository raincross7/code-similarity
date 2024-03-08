#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define rep(i, n) FOR(i, 0, n)
#define whole(x) (x).begin(),(x).end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
using P = pair<int, int>;
#define debug(var) cerr << "[" << #var << "] " << var << endl
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
const ll mod = 1000000007;
const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};


int main(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    rep(i, n) {
        int a;
        cin >> a;
        chmax(x, a);
    }
    rep(i, m) {
        int a;
        cin >> a;
        chmin(y, a);
    }

    string ans = "No War";

    if (x>=y) ans = "War";
    
    cout << ans << endl;
    return 0;
}