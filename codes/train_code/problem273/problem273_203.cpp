#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(),a.end()
#define rrng(a) a.rbegin(),a.rend()
#define maxs(x,y) (x = max(x,y))
#define mins(x,y) (x = min(x,y))
#define limit(x,l,r) max(l,min(x,r))
#define lims(x,l,r) (x = max(l,min(x,r)))
#define isin(x,l,r) ((l) <= (x) && (x) < (r))
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcountll
#define uni(x) x.erase(unique(rng(x)),x.end())
#define show(x) cout<<#x<<" = "<<x<<endl;
#define print(x)cout<<x<<endl;
#define PQ(T) priority_queue<T,v(T),greater<T> >
#define bn(x) ((1<<x)-1)
#define dup(x,y) (((x)+(y)-1)/(y))
#define newline puts("")
#define v(T) vector<T>
#define vv(T) v(v(T))
using namespace std;
typedef long long int ll;
typedef unsigned uint;
typedef unsigned long long ull;
typedef pair<int,int> P;
typedef tuple<int,int,int> T;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
typedef vector<T> vt;

int main() {
  int n;
  ll d, a;
  cin >> n >> d >> a;
  vector<pair<ll,ll>> M(n);
  queue<pair<ll,ll>> q;
  vl x(n);
  rep(i,n){
    cin >> M[i].fi >> M[i].se;
  }
  sort(rng(M));
  d = d*2;
  ll ans = 0;
  ll tot = 0;
  rep(i,n){
    ll x = M[i].fi;
    ll h = M[i].se;
    while(q.size() && q.front().fi < x){
        tot-=q.front().se;
        q.pop();
    }
    h-=tot;
    if(h>0){
      int c = (h+a-1)/a;
      ans+=c;
      ll damage = a*c;
      tot+= damage;
      q.emplace(x+d,damage);
    }
  }
  print(ans);
  return 0;
}