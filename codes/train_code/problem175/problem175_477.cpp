#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) REP(i,0,n)
#define REP(i,s,e) for(int i=(s); i<(int)(e); i++)
#define repr(i, n) REPR(i, n, 0)
#define REPR(i, s, e) for(int i=(int)(s-1); i>=(int)(e); i--)
#define pb push_back
#define all(r) r.begin(),r.end()
#define rall(r) r.rbegin(),r.rend()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
double EPS = 1e-8;

template<typename T> T chmax(T& a, const T& b){return a = (a > b ? a : b);}
template<typename T> T chmin(T& a, const T& b){return a = (a < b ? a : b);}

int main(){
   int n;
   cin >> n;
   vl a(n), b(n);
   rep(i, n) cin >> a[i] >> b[i];
   if(a == b) {
       cout << 0 << endl;
       return 0; 
   }
   ll sum = 0LL;
   rep(i, n) sum += a[i];
   ll x = INF;
   rep(i, n) {
       if(a[i] > b[i]) x = min(x, b[i]);
   }
   cout << sum - x << endl;
   return 0;
}