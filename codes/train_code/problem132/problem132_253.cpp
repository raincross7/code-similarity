#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ii pair <int, int>
#define app push_back
#define all(a) a.begin(), a.end()
#define bp __builtin_popcount
#define ll long long
#define mp make_pair
#define f first
#define s second
#define Time (double)clock()/CLOCKS_PER_SEC
signed main() {
    #ifdef HOME
    freopen("input.txt", "r", stdin);
    #else
    #define endl '\n'
    ios_base::sync_with_stdio(0); cin.tie(0);
    #endif
    int n;
    cin >> n;
    vector <int> a(n);
    int p = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        int x = min(p, a[i]);
        ans += x;
        a[i] -= x;
        ans += a[i] / 2;
        p = a[i] & 1;
    }   
    cout << ans << endl;    
}