#include <bits/stdc++.h>
using namespace std;

//repetition
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)

//container util
#define all(x) (x).begin(),(x).end()

//typedef
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VLL;
typedef vector<VLL> VVLL;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;

//const value
//const ll MOD = 1e9 + 7;
//const int dx[] = {0,1,0,-1};//{0,0,1,1,1,-1,-1,-1};
//const int dy[] = {1,0,-1,0};//{1,-1,0,1,-1,0,1,-1};

//conversion
inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
inline ll toLL(string s) {ll v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll w,h;
  cin >> w >> h;
  VLL ww(w);
  VLL hh(h);

  vector<PII> v;
  rep(i,w) cin >> ww[i], v.emplace_back(ww[i],0);
  rep(i,h) cin >> hh[i], v.emplace_back(hh[i],1);
  h++,w++;
  sort(all(v));

  ll res = 0;
  rep(i,v.size()){
    if(v[i].second) res += w * v[i].first, h--;
    else res += h * v[i].first, w--;
  }
  cout << res << endl;
  return 0;
}
