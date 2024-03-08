#include "bits/stdc++.h"
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep2(i, l, r) for (int i = (l); i < (r); i++)
#define ALL(x) (x).begin(), (x).end()     //昇順
#define RALL(x) (x).rbegin(), (x).rend()  // 降順
#define pri(x) cout << (x) << "\n"
#define pri2(x, y) cout << (x) << " " << (y) << "\n"
#define pri3(x, y, z) cout << (x) << " " << (y) << " " << (z) << "\n"
const long long mod = 1e9 + 7;
typedef long long ll;
typedef priority_queue<int> PQ;
typedef vector<long long> VL; // VL a(n);
typedef vector<bool> VB;
typedef vector<double> VD;
typedef vector<string> VS;
typedef vector<char> VC;
typedef vector<VS> VSS;
typedef vector<VC> VCC;
typedef vector<VL> VLL; // VII a(n,VI(m)) n * m
typedef pair<ll, ll> PL;
typedef map<ll, ll> MP; // MP a;
typedef vector<pair<ll, ll>> PS; // PS a(n);

template <class T, class U>
bool chmax(T &a, U b) {
  if (a <= b) {
    a = b;
    return 1;
  }
  return 0;
}
template <class T, class U>
bool chmin(T &a, U b) {
  if (a > b) {
    a = b;
    return 1;
  }
  return 0;
}
template <typename T>
ostream &operator<<(ostream &os, vector<T> &v) {
  os << "{";
  rep(i, (int)v.size()) { os << v[i] << (i < v.size() - 1 ? ", " : ""); }
  os << "}";
  return os;
}

// g++ -std=c++11 prac.cpp
// operator << (cout,a);
// chmin(min,a)

int main() {
  ll n,k,m,x=0,y=0,z = 0,h=0,w=0,ans=0,sum = 0, Max = -1, Min = 3e9+1;
  string t;
  bool ok=true; 
  cin >> n >> h;
  PS a(n),c(n);
  rep(i,n){
    cin >> x >> y;
    a[i] = make_pair(x,y);
  }

  sort(ALL(a));
  Max = a[n-1].first;

  rep(i,n){
    c[i].first = a[i].second;
    c[i].second = a[i].first;
  }
  sort(RALL(c));

  rep(i,n){
    if(Max < c[i].first){
      h -= c[i].first;
      ans++;
    }
    if(h<=0){
      pri(ans);
      return 0; 
    }
  }

  while(h>0){
    h -= Max; 
    ans++;
  } 
  pri(ans);
  return 0;
}