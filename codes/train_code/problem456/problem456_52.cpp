#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ii = pair<int, int>;
using iii = pair<ii, int>;
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define __lcm(a, b) a * b / __gcd(a, b)
const int MOD = 1e9 + 7;
const int INF = 2e9;
const int N = 1e5 + 5;

int n;
int a[N], ans[N];

void solve() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        ans[a[i]] = i;
    }
    for(int i = 1; i <= n; i++) {
        cout << ans[i] << (i == n ? "\n" : " ");
    }
}

int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
    
}