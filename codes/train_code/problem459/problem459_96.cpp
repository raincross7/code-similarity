#include<bits/stdc++.h>
#define forr(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i,n) for(int i = 0; i < (n); i++)
#define rrep(i,n) for(int i = 1; i <= (n); i++)
#define ALL(a) (a.begin()),(a.end())
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef pair<ll, ll> LP;
const ll LINF = 1LL<<60;
const int INF = 1001001001;
const int MOD = 1000000007;

/* --------------------------------------------------- */

int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    if(n % 2 == 0) {
        ll m = 5;
        while(m <= n) {
            ans += n / (2 * m);
            m *= 5;
        }
    }
    cout << ans << endl;
    return 0;
}