#include <bits/stdc++.h>
using namespace std ;

#define pb(n) push_back(n)
#define fi first
#define se second
#define all(r) begin(r),end(r)
#define vmax(ary) *max_element(all(ary))
#define vmin(ary) *min_element(all(ary))
#define debug(x) cout<<#x<<": "<<x<<endl
#define fcout(n) cout<<fixed<<setprecision((n))
#define scout(n) cout<<setw(n)
#define vary(type,name,size,init) vector< type> name(size,init)
#define vvl(v,w,h,init) vector<vector<ll>> v(w,vector<ll>(h,init))
#define mp(a,b) make_pair(a,b)

#define rep(i,n) for(int i = 0; i < (int)(n);++i)
#define REP(i,a,b) for(int i = (a);i < (int)(b);++i)
#define repi(it,array) for(auto it = array.begin(),end = array.end(); it != end;++it)
#define repa(n,array) for(auto &n :(array))

using ll = long long;
using pii = pair<int,int> ;
using pll = pair<ll,ll> ;

template<typename T>
void O(T t){
  cout << t << endl;
}

const ll mod = 1e9+7;
constexpr ll inf = ((1<<30)-1)*2+1 ;
constexpr double PI = acos(-1.0) ;
double eps = 1e-10 ;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  ll n;
  while(cin >> n && n ){
    ll cnt = 0;
    string s,p;
    int v[2] = {};
    int f[2] = {};
    cin >> p;
    if(p == "lu"){
      v[0] = 1;
    }
    else if(p == "ru"){
      v[1] = 1;
    }
    else if(p == "ld"){
      v[0] = 0;
    }
    else{
      v[1] = 0;
    }
    rep(i,n-1){
      cin >> s;
      if(s == "lu"){
        v[0] = 1;
      }
      else if(s == "ru"){
        v[1] = 1;
      }
      else if(s == "ld"){
        v[0] = 0;
      }
      else{
        v[1] = 0;
      }
      if(v[0] == v[1] && s[0] != p[0]){
        ++cnt;
      }
        /* cout << v[0] << ' ' << v[1] << endl; */
      /* cout << s << ' ' << p << endl;       */
      p = s;
    }
    cout << cnt << endl;
  }

  return 0;
}