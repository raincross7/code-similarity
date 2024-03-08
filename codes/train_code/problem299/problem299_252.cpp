#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;
#define all(x) (x).begin(),(x).end()
typedef long long ll;
#define rep(i,n) for(ll i=0, i##_len=(n); i<i##_len; ++i)
#define REP(i,num,n) for(ll i=num, i##_len=(n); i<i##_len; ++i)
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
#define print(x) cout << (x) << endl;
#define sz(x) int(x.size())
 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
const ll LLINF = 1LL<<60;
const int INF = 1<<29;
const int MOD = 1000000007;
 
void add(long long &a, long long b) {
  a += b;
  if (a >= MOD) a -= MOD;
}
 
const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};


int main(void){
    cout.tie(0);
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(10);
    ll a,b,k;
    cin >> a >> b >> k;
    rep(i,k){
      if(i % 2 == 0){
        if(a % 2 != 0){
          --a;
          b += a / 2;
          a /= 2;
        }else{
          b += a / 2;
          a /= 2;
        }
      }else{
        if(b % 2 != 0){
          --b;
          a += b / 2;
          b /= 2;
        }else{
          a += b / 2;
          b /= 2;
        }
      }
    }
    cout << a << " " << b << endl;
}