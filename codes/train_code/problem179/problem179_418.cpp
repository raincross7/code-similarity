#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//const ll MOD = 1e9 + 7;
//const ll MOD = 998244353;
//const ll MOD = ;
ll mod(ll A, ll M) {return (A % M + M) % M;}
const ll INF = 1LL << 60;
template<class T> bool chmin(T& a, T b) {if (a > b) {a = b; return true;} return false;}
template<class T> bool chmax(T& a, T b) {if (a < b) {a = b; return true;} return false;}
ll divceil(ll A, ll B) {return (A + (B - 1)) / B;}
ll myctoi(char C) {return C - '0';}
char myitoc(ll N) {return '0' + N;}
#define FINALANS(A) {cout << (A) << '\n'; exit(0);}

int main()
{
  ll N, K;
  cin >> N >> K;
  vector<ll> A(N);
  for (ll i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }

  vector<ll> B(N + 1), C(N + 1);
  B.at(0) = 0, C.at(0) = 0;
  for (ll i = 0; i < N; i++)
  {
    B.at(i + 1) = B.at(i) + A.at(i);
    C.at(i + 1) = C.at(i) + max(0LL, A.at(i));
  }

  ll ans = -INF;
  for (ll i = 0; i < N - K + 1; i++)
  {
    ll positive = C.at(i + K) - C.at(i);
    ll all = B.at(i + K) - B.at(i);
    chmax(ans, C.back() - (positive - all));
    chmax(ans, C.back() - positive);
  }
  cout << ans << endl;
}