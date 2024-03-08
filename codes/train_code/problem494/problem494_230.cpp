// header {{{
#include <bits/stdc++.h>
using namespace std;

// {U}{INT,LONG,LLONG}_{MAX,MIN}
#define INF         INT_MAX/3
#define LLINF       LLONG_MAX/3
#define MOD         (1000000007LL)
#define MODA(a, b)  a=((a)+(b))%MOD
#define MODP(a, b)  a=((a)*(b))%MOD
#define inc(i, l, r)   for(int i=(l);i<(r);i++)
#define dec(i, l, r)   for(int i=(r)-1;i>=(l);i--)
#define pb          push_back
#define se          second
#define fi          first
#define mset(a, b)  memset(a, b, sizeof(a))

using LL  = long long;
using G   = vector<vector<int>>;

int di[] = {0, -1, 0, 1};
int dj[] = {1, 0, -1, 0};
// }}}

int main() {
    cin.tie(0);ios::sync_with_stdio(false);
    LL n, a, b;cin >> n >> a >> b;
    if(a+b > n+1 || a*b < n){
        cout << -1 << endl;
        return 0;
    }
    vector<int> ans;
    int cnt = 1;
    inc(i, 0, b){
        vector<int> v;
        inc(j, 0, a){
            v.pb(cnt);
            cnt++;
            if(b-i-2 == n-cnt) break;
        }
        reverse(v.begin(), v.end());
        for(auto vv : v){
            ans.pb(vv);
        }
    }
    reverse(ans.begin(), ans.end());
    for(auto a : ans){
        cout << a << endl;
    }
    return 0;
}
