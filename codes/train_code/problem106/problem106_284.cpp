#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define forn(i, n) for (int i = 0; i < (int)n; i++)
#define pb push_back
#define fastIO ios::sync_with_stdio(0), cin.tie(0)
#define endl '\n'
typedef long long ll;
typedef double lf;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main() {
#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
#else
    fastIO;
#endif
    int n;
    cin>>n;
    vector<int> v(n);
    forn(i,n)cin>>v[i];
    ll sum=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            sum+=v[i]*v[j];
        }
    }
    cout<<sum<<endl;
    return 0;
}
