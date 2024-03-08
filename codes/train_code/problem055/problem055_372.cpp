#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, x, n) for(int i = x; i <= n; i++)
#define rep3(i, x, n) for(int i = x; i >= n; i--)
#define elif else if
#define sp setprecision
#define pb(x) push_back(x)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pdd;
const ll MOD = 1e9+7;
const ll MOD2 = 998244353;
const int inf = INT_MAX;
const ll INF = LLONG_MAX;
const string alpha = "abcdefghijklmnopqrstuvwxyz";

int main(){
    int N;
    cin >> N;
    int a[N];
    rep(i, N) cin >> a[i];
    vector<int> vec;
    rep(i, N){
        int j = 0;
        while(i+j+1 < N && a[i] == a[i+j+1]) j++;
        if(j) vec.pb(j+1);
        i += j;
    }
    int ans = 0;
    for(auto &e: vec){
        ans += e/2;
    }
    cout << ans << endl;
}