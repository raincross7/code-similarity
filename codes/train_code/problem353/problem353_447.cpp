#include <bits/stdc++.h>
#include <math.h>
#define _GLIBCXX_DEBUG
#define _LIBCPP_DEBUG 0

using namespace std;
#define ll long long
#define rep(i,n) for (int i = 0; i < n; i++)
#define rrep(i,n) for (int i = n-1; i >= 0; i--)
#define MOD (1000000007)
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define vvi vector<vi>
#define vvl vector<vl>
#define pii pair<int, int>
#define pli pair<ll, int>a
#define pb push_back
#define sz(x) int(x.size())

#define mp make_pair
#define all(a) (a).begin(),(a).end()

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

ll keta(ll n){
  string s = to_string(n);
  ll num = s.size();
  return num;
}

const ll INF = 1LL << 60;

const int dh[4] = {1,0,-1,0};
const int dw[4] = {0,1,0,-1};

struct Edge{
  int to;
  int weight;
  Edge(int t, int w) : to(t), weight(w){}
};
using Graph = vector<vector<Edge>>;
using P = pair<ll, int>;

class UnionFind{
  public:
  vi Parent;
  UnionFind(int n){
    Parent = vi(n,-1);
  }

  int root(int a){
    if(Parent[a] < 0) return a;
    else return Parent[a] = root(Parent[a]);
  }

  int size(int a){
    return -Parent[root(a)];
  }

  bool merge(int a, int b){
    a = root(a);
    b = root(b);
    if(a == b) return false;

    if(size(a) < size(b)) swap(a,b);
    Parent[a] += Parent[b];
    Parent[b] = a;

    return true;
  }
};

class Factrial{
  public:
  vl Fac;
  Factrial(int MAX){
    Fac = vl(MAX+1);
    rep(i,MAX) {
      if(i == 0) Fac[i+1] = 1;
      else Fac[i+1] = ((i+1)*Fac[i])%MOD;
    }
  }
};


int main(){
  int n; cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];
  
  map<int,int> C;
  vector<pii> ai(n);
  rep(i,n) ai[i] = mp(a[i],i);
  sort(all(ai));
  rep(i,n) {
    C[ai[i].first] = i;
  }

  int cnt = 0;
  rep(i,n) {
    int ideal = C[a[i]];
    if(i%2 != ideal%2) cnt++;
  }

  cout << cnt/2 << endl;
}