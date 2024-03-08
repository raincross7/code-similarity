#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
const ll mod = 1e11 + 7;
const int maxn = 2e5+5;
#include<atcoder/dsu>
using namespace atcoder;
void solve() {
    int n, m;
    cin >> n >> m;
    dsu d(n);
    f(m) {
        int op, x, y;
        cin >> op >> x >> y;
        if (!op) {
            d.merge(x, y);
        }
        else {
            cout << d.same(x, y) << '\n';
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int c = 0;
    int t;
    if (!c) {
        t = 1;
    }
    else {
        cin >> t;
    }
    while (t--) {
        solve();
    }
    
}
