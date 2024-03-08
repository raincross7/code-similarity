#include <bits/stdc++.h>
#define rep(i, n) for (int i=0; i<(int)(n); i++)
#define all(v) v.begin(), v.end()
#define PRINT(v) for (auto x : (V)) cout <<x <<" " <<endl;
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
const ll MOD = 1000000007;
const ll INF = 10000000000000000;
vector<int> x4 = {0, 1, 0, -1}, x8 = {0, 1, 1, 1, 0, -1, -1, -1};
vector<int> y4 = {1, 0, -1, 0}, y8 = {1, 1, 0, -1, -1, -1, 0, 1};
template<class T> struct edge { int from, to; T cost;};
template<class T> inline bool chmin(T& a, T b){if (a>b){a = b; return true;}return false;}
template<class T> inline bool chmax(T& a, T b){if (a<b){a = b; return true;}return false;}
template<class T> inline T powerM(T a,T b){if (b==0) return 1;
T tmp = powerM(a,b/2); if (b%2==0) return tmp*tmp%MOD; else return tmp*tmp%MOD*a%MOD; }
template<class T> inline T power(T a,T b,T m){ if (b==0) return 1;
  T tmp = power(a,b/2,m); if (b%2==0) return tmp*tmp%m; else return tmp*tmp%m*a%m; }
template<class T> inline T gcd(T a, T b){if (b==0) return a; return gcd(b, a%b);}
template<class T> inline T lcm(T a, T b){return a / gcd(a,b) * b;}
// ax+by=gcd(a,b)を解く
template<class T> inline T extgcd(T a,T b,T &x,T &y){if (b==0){x=1; y=0; return a;} T d=extgcd(b,a%b,y,x); y -= a/b*x; return d;}
void hey(){ cout <<"hey" <<endl; }


int H,W,D;
vector<pair<int,int>> A;
vector<ll> ma;
int Q;

void input() {
  cin >>H >>W >>D;
  A.assign(H*W, {0, 0});
  rep(i, H){ rep(j, W){
    int a; cin >>a; a--;
    A[a] = {i, j};
  }}
  ma.assign(H*W, 0);
  // マスの移動は必ずx+Dの数字が書かれているマスへの移動になる
  // ので0～D-1から始まり移動にかかった魔力を累積和的なノリで前計算しておく
  for (int i=0; i<=D-1; i++){
    int t = i;
    while (t + D < H*W){
      ma[t+D] = ma[t] + abs(A[t].first - A[t+D].first) + abs(A[t].second - A[t+D].second);
      t += D;
    }
  }
  cin >>Q;
}

void solve() {
  int L,R; cin >>L >>R; L--; R--;
  ll res = 0;
  if (L == R){
    cout <<res <<endl;
  }else{
    res = ma[R] - ma[L];
    cout <<res <<endl;
  }
}

int main() {
  input();

  rep(q, Q) solve();
}