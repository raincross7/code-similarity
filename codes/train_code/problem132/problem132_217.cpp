#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define rep(i, n) for (int i=0; i < n; i++)
#define repd(i, n) for (int i = n-1; i > -1; i--)
#define repran(i, a,b) for (int i = a; i<b;i++)
#define all(x) (x).begin(), (x).end()
#define v(T) vector<T>
#define vv(T) vector<v(T)>
typedef long long ll;
typedef pair<int, int> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;

int main()
{
    int n;
    cin >> n;
    vi a(n);
    rep(i, n) cin >> a[i];
    ll ans = 0, tmp = 0;
    for (int x : a){
        if (x==0) {
            ans += tmp/2;
            tmp = 0;
            continue;
        }
        tmp += x;
        
    }
    ans += tmp/2;
    cout << ans << endl;

}