#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define SZ(x) ((int)(x).size())
#define rep(i,n) for(int i=0;i<(n);++i)
#define fore(i,a) for(auto &i:a)
#define min(...) min({__VA_ARGS__})
#define max(...) max({__VA_ARGS__})
#define Yes cout << "Yes" << endl;
#define No cout << "No" << endl;
#define ALL(x) (x).begin(),(x).end()
signed _main(); signed main() { cin.tie(0); ios::sync_with_stdio(false); _main(); }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> using v = vector<T>;
template<class T> using vv = vector<v<T>>;
const int MOD=1e9+7;
const long long INF = 1LL << 60;
using P=pair<int,int>;
int gcd(int a,int b) {return __gcd(a,b);}//if you use gcc to compile, use this

signed _main(){
  int N,K; cin >> N >> K;
  v<int> A(N);
  int maxi=0;
  rep(i,N){
    cin >> A[i];
    chmax(maxi,A[i]);
  }
  if(K>maxi){
    cout << "IMPOSSIBLE" << endl;
    return 0;
  }
  int num=A[0];
  rep(i,N){
    num=gcd(num,A[i]);
  }
  if(K%num==0){
    cout << "POSSIBLE" << endl;
  }
  else{
    cout << "IMPOSSIBLE" << endl;
  }
  return 0;
}
