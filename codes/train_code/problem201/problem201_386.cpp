#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define ll long long
using namespace std;
//typedef vector<unsigned int>vec;
//typedef vector<ll>vec;
//typedef vector<vec> mat;

const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
const int INF = 1000000000;
const ll LINF = 1000000000000000000;//1e18
const ll  MOD = 1000000007;
const double PI = acos(-1.0);
const double EPS = 1e-10;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
//template<class T> inline void add(T &a, T b){a = ((a+b) % MOD + MOD) % MOD;};



int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    vector<ll> a(N), b(N), idx(N);
    iota(idx.begin(), idx.end(), 0);
    REP(i,N) cin >> a[i] >> b[i];
    sort(idx.begin(), idx.end(), [&](int x, int y){return a[x] + b[x] > a[y] + b[y];});
    ll ans = 0;
    REP(i,N){
        if(i % 2 == 0) ans += a[idx[i]];
        else ans -= b[idx[i]];
    }
    cout << ans << endl;
}