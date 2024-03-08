#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <string>
#include <map>
#include <cmath>
#include <cstring>

#define fi first
#define se second
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rrep(i,n) for (int i = 1; i < (n); ++i)
#define drep(i,n) for (int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define all(x) (x).begin(), (x).end()
#define maxs(x,y) (x = max(x,y))
#define mins(x,y) (x = min(x,y))
#define pb push_back
#define sz(x) (int)(x).size()
#define PQ(T) priority_queue<T, v(T), greater<T> >

using namespace std;
typedef long long ll;
typedef unsigned uint;
typedef unsigned long long ull;
typedef pair<int,int> P;

const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;

const int mod = 1000000007;

int main() {
    int M;
    cin >> M;
    vector<ll> d(M);
    vector<ll> c(M);
    rep(i,M) cin >> d[i] >> c[i];
    
    ll n = 0;
    ll s = 0;
    rep(i,M) {
        n += c[i];
        s += (d[i] * c[i]);
    }

    ll ans = (n-1) + (s-1) / 9;
    cout << ans << endl;
    return 0;
}
