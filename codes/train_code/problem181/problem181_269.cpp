#include<bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i= (a); i < (b); ++i)
typedef long long ll;
typedef pair<int,int> P;
const int INF = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;
int main() { ll K, A, B;
  cin >> K >> A >> B,K++;
  if(A+1<B&&A+1<K){
    K -= A ;
    ll ans = A;
    ll a = K / 2;
    ans += (B-A)*a;
    ans += K % 2;
    cout << ans << endl;
  }else{
    cout << K << endl;
  }
}