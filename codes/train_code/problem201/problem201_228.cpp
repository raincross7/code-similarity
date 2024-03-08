#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll INF = 1LL<<60;

ll gcd(ll a, ll b) {
  if(b == 0) return a;
  return gcd(b, a % b);
}

template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }

ll modpow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n > 0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<tuple<ll, ll, ll>> T(N);

  ll a, b, c;
  for(int i = 0; i < N; i++){
    cin >> a >> b;
    T[i] = make_tuple(a+b, a, b);
  }

  sort(T.rbegin(), T.rend());

  ll sum_A = 0;
  ll sum_B = 0;

  for(int i = 0; i < N; i++){
    if(i%2 == 0){
      sum_A += get<1>(T[i]);
    }else{
      sum_B += get<2>(T[i]);
    }

  }

  cout << sum_A - sum_B << endl;



  return 0;
}
