#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> P;
typedef pair<P,ll> PLL;
typedef pair<P,P> PP;
typedef vector<ll> llVEC;
typedef vector<P> PVEC;
typedef priority_queue<P,PVEC,greater<P> > PPQ;
typedef priority_queue<ll, llVEC, greater<ll> > llPQ;

#define rep(i,a,n) for(ll i = a;i < n;i++)
#define rrep(i,a,n) for(ll i = n-1; i >= a;i--)
#define index_check(i,n) if(i > n-1 || i < 0) continue;
#define LINF (ll)1e18
#define INF (int)1e9
#define fs first
#define sc second

template<typename T>
ll sz(vector<T> &vec){ return (ll)vec.size(); }
ll sz(string &s){ return (ll)s.size(); }

ll gcd(ll a,ll b){ return ((!b) ?a :gcd(b, a%b)); }

int main(){
    ll n;
    cin >> n;
    ll a[n];
    rep(i,0,n) cin >> a[i];
    ll sxor[n+1] = {},ssum[n+1] = {};

    rep(i,0,n){
        sxor[i+1] = sxor[i] ^ a[i];
        ssum[i+1] = ssum[i] + a[i];
    }

    ll cnt = 0;
    rep(i,0,n){
        ll ok = i,ng = n;
        while(abs(ok-ng) > 1){
            ll mid = (ok+ng)/2;

            if((sxor[mid+1] ^ sxor[i]) == (ssum[mid+1] - ssum[i])){
                ok = mid;
            }
            else{
                ng = mid;
            }
        }
        cnt += ok - i + 1;
    }
    cout << cnt << endl;
    return 0;
}
