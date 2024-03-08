#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define F first
#define S second
#define pb push_back
#define forn(b) for(int i = 0; i < b; i++)
#define rforn(b) for(int i = b - 1 ;i >= 0; i--)
#define It(m) for(auto it = m.begin(); it != m.end(); it++)
#define N 500500
#define PI 3.14159265358979323846264338327950L
#define speed ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
const ll mod = (ll)1e9 + 7;
    
int main() {

    int n; cin >> n;
    vi v(n);
    forn(n) cin >> v[i];
    vector<ll> sum(n);
    ll total = 0;
    for(int i = 0; i < n; i++) {
        total += v[i];
        sum[i] = total;
    }
    ll mn = LONG_LONG_MAX;
    for(int i = 0; i < n - 1; i++) {
        mn = min(mn, abs(total - sum[i] - sum[i]));
    }
    cout << mn;
    return 0;
}
