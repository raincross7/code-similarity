#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld  = long double;
using pll = pair<ll, ll>;
using pld = pair<ld, ld>;
const int INF=1e9+7;
const ll LINF=9223372036854775807;
const ll MOD=1e9+7;
const ld PI=acos(-1);
const ld EPS = 1e-10; //微調整用（EPSより小さいと0と判定など）

int ii() { int x; if (scanf("%d", &x)==1) return x; else return 0; }
long long il() { long long x; if (scanf("%lld", &x)==1) return x; else return 0; }
string is() { string x; cin >> x; return x; }
char ic() { char x; cin >> x; return x; }
void oi(int x) { printf("%d ", x); }
void ol(long long x) { printf("%lld ", x); }
void od_nosp(double x) { printf("%.15f", x); } // 古い問題用
void od(double x) { printf("%.15f ", x); }
// long doubleで受け取り、fをLfなどに変えて出力すると、変な数値が出る
// それをなんとかするには独自の出力を作らなければならなそう
void os(const string &s) { printf("%s ", s.c_str()); }
void oc(const char &c) { printf("%c ", c); }
#define o_map(v){cerr << #v << endl; for(const auto& xxx: v){cout << xxx.first << " " << xxx.second << "\n";}} //動作未確認
void br() { putchar('\n'); }

// #define gcd __gcd //llは受け取らない C++17~のgcdと違うので注意
// int lcm(int a, int b){return a / gcd(a, b) * b;}
#define begin_end(a) a.begin(),a.end() //sort(begin_end(vec));
#define REP(i,m,n) for(ll i=(ll)(m) ; i < (ll)(n) ; i++ )
#define DREP(i,m,n) for(ll i=(ll)(m) ; i > (ll)(n) ; i-- )
#define rep(i,n) REP(i,0,n)
#define m_p(a,b) make_pair(a,b)
#define SORT_UNIQUE(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define p_b push_back
#define SZ(x) ((ll)(x).size()) //size()がunsignedなのでエラー避けに
#define endk '\n'


// coutによるpairの出力（空白区切り）
template<typename T1, typename T2> ostream& operator<<(ostream& s, const pair<T1, T2>& p) {return s << "(" << p.first << " " << p.second << ")";}
// coutによるvectorの出力（空白区切り）
template<typename T> ostream& operator<<(ostream& s, const vector<T>& v) {
  int len = v.size();
  for (int i = 0; i < len; ++i) {
    s << v[i]; if (i < len - 1) s << " "; //"\t"に変えるとTabで見やすく区切る
  }
  return s;
}
// coutによる多次元vectorの出力（空白区切り）
template<typename T> ostream& operator<<(ostream& s, const vector< vector<T> >& vv) {
  int len = vv.size();
  for (int i = 0; i < len; ++i) {
    s << vv[i] << endl;
  }
  return s;
}

//最大値、最小値の更新。更新したor等しければtrueを返す
template<typename T>
bool chmax(T& a, T b){return (a = max(a, b)) == b;}
template<typename T>
bool chmin(T& a, T b){return (a = min(a, b)) == b;}

//4近傍（上下左右） rep(i, 2) にすると右・下だけに進む
vector<int> dx_4 = {1, 0, -1, 0};
vector<int> dy_4 = {0, 1, 0, -1};

// -------- template end - //


// - library ------------- //

// warshall_floyd(頂点数, 隣接行列vector[N][N]) 
void warshall_floyd(ll n, vector<vector<ll> > &d) {
  for (ll k = 0; k < n; k++){       // 経由する頂点
    for (ll i = 0; i < n; i++) {    // 始点
      for (ll j = 0; j < n; j++) {  // 終点
        // オーバーフロー避け
        ll tmp = ( d[i][k] == LINF || d[k][j] == LINF ? LINF : d[i][k] + d[k][j] );
        d[i][j] = min(d[i][j], tmp);
      }
    }
  }
}



// --------- library end - //


int main(){

  ll N, M, R;
  cin >> N >> M >> R;

  vector<ll> rs;
  rep(i, R){
    rs.push_back(il() - 1);
  }

  // 使い方
  // i->j に直接行く場合の隣接行列を作り、それを再利用して更新
  // d[i][i] = 0, 経路の無い頂点同士は LINF
  vector<vector<ll> > d(N, vector<ll>(N, LINF));
  rep(i, N) d[i][i] = 0;
  rep(m, M){
    ll i, j, wei;
    cin >> i >> j >> wei;
    // 0-indexed
    i--;
    j--;
    // 同じ頂点間に異なる重みの辺が存在し得る場合を考慮して、軽い方の辺を張る
    // 無向辺なら逆向きにも張ること
    chmin(d[i][j], wei);
    chmin(d[j][i], wei); // 無向辺の場合
  }
  warshall_floyd(N, d);

  ll ans = LINF;
  vector<ll> v(R);
  //1刻みで格納できる関数、便利
  iota(v.begin(), v.end(), 0);
  do{
    ll tmp = 0;
    //vは次の順列になる
    rep(i, R-1){
      // i : 0 ~ R-2
      // rs[i] -> rs[i+1] に移動する
      tmp += d[rs[v[i]]][rs[v[i+1]]];
    }
    chmin(ans, tmp);
  }while(next_permutation(v.begin(),v.end()));

  cout << ans << endk;

}