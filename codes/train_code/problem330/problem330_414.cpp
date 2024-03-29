#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REPLL(i, n) for (ll i = 0; i < (ll)(n); i++)
using namespace std;
template<class T>inline bool chmax(T &a, const T &b){if(a < b){a = b; return 1;}return 0;}
template<class T>inline bool chmin(T &a, const T &b){if(a > b){a = b; return 1;}return 0;}
typedef long long ll;

const ll INF = (1LL<<32);
vector<vector<ll> > d;  // グラフの距離を格納した2次元配列（隣接行列）
// d[u][v]は辺e=(u,v)のコスト（辺が存在しない場合はINF、ただしd[i][i]=0）

void warshall_floyd(int n){  // nは頂点数
  for(int i = 0; i < n; i++){  // 経由する頂点
    for(int j = 0; j < n; j++){  // 開始頂点
      if(d[j][i] == INF) continue;
      for(int k = 0; k < n; k++){  // 終端
        if(d[i][k] == INF) continue;
        d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
      }
    }
  }
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int N, M; cin >> N >> M;
  vector<vector<ll> > G(N, vector<ll>(N, INF));
  d.assign(N, vector<ll>(N, INF));
  REP(i, M){
    ll a, b, c; cin >> a >> b >> c; a--; b--;
    G[a][b] = c;
    G[b][a] = c;
  }
  d = G;
  warshall_floyd(N);
  int ans = 0;
  for(int i = 0; i < N-1; i++){
    for(int j = i+1; j < N; j++){
      if(G[i][j] != INF && G[i][j] > d[i][j]) ans++;
    }
  }
  cout << ans << endl;
}