#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

#define DEBUG(x) cerr<<#x<<": "<<x<<endl;
#define DEBUG_VEC(v) cerr<<#v<<":";for(int i=0;i<v.size();i++) cerr<<" "<<v[i]; cerr<<endl
#define DEBUG_MAT(v) cerr<<#v<<endl;for(int i=0;i<v.size();i++){for(int j=0;j<v[i].size();j++) {cerr<<v[i][j]<<" ";}cerr<<endl;}


typedef long long ll;
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define pii pair<int,int>
#define pis pair<int,string>
#define psi pair<string,int>
#define pll pair<ll,ll>
template<class S, class T> pair<S, T> operator+(const pair<S, T> &s, const pair<S, T> &t) { return pair<S, T>(s.first + t.first, s.second + t.second); }
template<class S, class T> pair<S, T> operator-(const pair<S, T> &s, const pair<S, T> &t) { return pair<S, T>(s.first - t.first, s.second - t.second); }
template<class S, class T> ostream& operator<<(ostream& os, pair<S, T> p) { os << "(" << p.first << ", " << p.second << ")"; return os; }
#define X first
#define Y second
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep1(i,n) for(int i=1;i<=(n);i++)
#define rrep(i,n) for(int i=(n)-1;i>=0;i--)
#define rrep1(i,n) for(int i=(n);i>0;i--)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define in(x, a, b) (a <= x && x < b)
#define all(c) c.begin(),c.end()
template<class T> bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T> bool chmin(T &a, const T &b) { if (a>b) { a = b; return 1; } return 0; }
#define UNIQUE(v) v.erase(std::unique(v.begin(), v.end()), v.end());
const ll inf = 1000000001;
const ll INF = (ll)1e18 + 1;
const ll MOD = 1000000007;
//const ll MOD = 998244353;
const double pi = 3.14159265358979323846;
#define Sp(p) cout<<setprecision(15)<< fixed<<p<<endl;
int dx[4] = { 1,0, -1,0 }, dy[4] = { 0,1,0,-1 };
int dx2[8] = { 1,1,0,-1,-1,-1,0,1 }, dy2[8] = { 0,1,1,1,0,-1,-1,-1 };
#define fio() cin.tie(0); ios::sync_with_stdio(false);
//#define mp make_pair

vii G;
vl a;

void NO() {
  cout << "NO" << endl;
  exit(0);
}

ll dfs(int now, int par) {
  if (G[now].size() == 1) return a[now];
  vl b;
  ll sum = 0;
  rep (i, G[now].size()) {
    if (G[now][i] == par) continue;
    b.push_back(dfs(G[now][i], now));
    sum += b.back();
  }

  if (sum < a[now]) NO();
  sort(all(b));
  int s1 = sum - b.back(), s2 = b.back();
  int mi;

  if (s1 <= s2) {
    mi = s2;
  }
  else {
    if (sum % 2 == 0) mi = sum / 2;
    else mi = sum / 2 + 1;
  }
  if (mi > a[now]) NO();
  return 2*a[now] - sum;
}

int main() {
  int n;
  cin >> n;
  
  a.resize(n);
  rep (i, n) {
    cin >> a[i];
  }

  if (n == 2) {
    if (a[0] == a[1]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
  }
  
  G.resize(n);
  rep (i, n - 1) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    G[u].push_back(v);
    G[v].push_back(u);
  }

  int root;
  for (root = 0; root < n; root++) {
    if (G[root].size() > 1) break;
  }
  
 

  if (dfs(root, -1) == 0) {
    cout << "YES" << endl;
  }
  else {
    NO();
  }
}
