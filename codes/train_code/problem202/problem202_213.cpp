#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define chmax(x,y) x = max(x,y);
#define chmin(x,y) x = min(x,y);
const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};
const int INF = 1001001001;



int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i,n) {
        cin >> a[i];
        a[i] -= i+1;
    }
    sort(a.begin(), a.end());
    int c = 0;
    if (n%2 == 1) c = a[n/2];
    else c = (a[n/2]+a[n/2-1])/2;
    ll ans = 0;
    rep(i,n) {
        ans += abs(a[i]-c);
    }
    cout << ans << endl;
    return 0;
}