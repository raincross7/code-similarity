#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, x, n) for(int i = x; i <= n; i++)
#define rep3(i, x, n) for(int i = x; i >= n; i--)
#define elif else if
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pdd;
const ll MOD = 1e9+7;
const ll MOD2 = 998244353;
const ll INF = LLONG_MAX;
const string alpha = "abcdefghijklmnopqrstuvwxyz";

int main(){
    bool a[10];
    fill_n(a, 10, false);
    int N[4];
    rep(i, 4){
        cin >> N[i];
        a[N[i]] = true;
    }
    if(a[1] && a[9] && a[7] && a[4]) cout << "YES" << endl;
    else cout << "NO" << endl;
}