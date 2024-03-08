#include <bits/stdc++.h>
using namespace std;
using ll = long long; using ull = unsigned long long;
//#define int ll
using vb = vector<bool>; using vvb = vector<vb>;
using vi = vector<int>; using vvi = vector<vi>;
using vl = vector<ll>; using vvl = vector<vl>;
template<class T> using V = vector<T>;
template<class T> using VV = vector<V<T>>;
#define fi first
#define se second
#define maxs(x,y) (x=max(x,y))
#define mins(x,y) (x=min(x,y))
using pii = pair<int,int>; using pll = pair<ll,ll>;
#define FOR(i,a,b) for(ll i = (a); i < (ll)(b); ++i)
#define REP(i,n) FOR(i,0,n)
#define RFOR(i,a,b) for(ll i = (ll)(b)-1;i >= a;--i)
#define RREP(i,n) RFOR(i,0,n)
#define ALL(obj) (obj).begin(), (obj).end()
#define rALL(obj) (obj).rbegin(), (obj).rend()
#define eb(val) emplace_back(val)
const double PI = acos(-1), EPS = 1e-10;
const ll MOD = 1e9+7;
template<class T> istream& operator>>(istream &is,vector<T> &st){
  for(size_t i=0;i<st.size();++i) is >> st[i];
  return is;
}
template<class T> istream& operator>>(istream &is,vector<vector<T>> &st){
  for(size_t i=0;i<st.size();++i) is >> st[i];
  return is;
}
template<class T> ostream& operator<<(ostream &os, const vector<T> &st){
  for(size_t i=0;i<st.size();++i){
    if(i==st.size()-1) os << st[i];
    else os << st[i] << " ";
  }
  return os;
}
template<class T> ostream& operator<<(ostream &os, const vector<vector<T>> &st){
  for(size_t i=0;i<st.size();++i){
    os << st[i];
    if(i!=st.size()-1) os << endl;
  }
  return os;
}
signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  while(cin >> n,n){
    vi a(n);
    cin >> a;
    sort(ALL(a));
    int diff = INT_MAX;
    REP(i,n-1){
      mins(diff,abs(a[i]-a[i+1]));
    }
    cout << diff << endl;
  }
}

