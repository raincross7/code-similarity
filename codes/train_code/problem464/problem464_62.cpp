#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, x, n) for(int i = x; i <= n; i++)
#define rep3(i, x, n) for(int i = x; i >= n; i--)
#define elif else if
#define sp(x) fixed << setprecision(x)
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
const ll MOD = 1e9+7;
//const ll MOD = 998244353;
const int inf = 1e9;
const ll INF = 1e18;
const ld EPS = 1e-10;

int main(){
    int N, M;
    cin >> N >> M;
    int cnt[N];
    fill(cnt, cnt+N, 0);
    rep(i, M){
        int a, b; cin >> a >> b; a--, b--;
        cnt[a]++, cnt[b]++;
    }
    rep(i, N){
        if(cnt[i]&1) {cout << "NO" << endl; return 0;}
    }
    cout << "YES" << endl;
}