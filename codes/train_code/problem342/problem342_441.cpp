#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < (ll)(n); i++)
#define rep2(i, a, n) for(ll i = a; i < (ll)(n); i++)
#define memi cout << endl
#define kono(n) cout << fixed << setprecision(n)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define hina cout << ' '
#define in(n) cin >> n
#define in2(n, m) cin >> n >> m
#define in3(n, m, l) cin >> n >> m >> l
#define out(n) cout << n
const ll mei = (ll)1e9 + 7;

int main(){
  string s;
  in(s);
  rep(i, s.size() - 1){
    if(s[i] == s[i + 1]){
      out(i + 1);
      hina;
      out(i + 2);
      memi;
      return 0;
    }
  }
  rep(i, s.size() - 2){
    if(s[i] == s[i + 2]){
      out(i + 1);
      hina;
      out(i + 3);
      memi;
      return 0;
    }
  }
  out(-1);
  hina;
  out(-1);
  memi;
}