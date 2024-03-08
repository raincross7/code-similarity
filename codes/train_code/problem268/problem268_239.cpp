#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vstr;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define asd cout << "ok" << endl;

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define trav(it, m) for(auto it = m.begin(); it it!= m.end(); it++)

const char nl = '\n';
const int MOD = 1e9 +7;
const ll INF = 1e19;
const ld PI = acos((ld)-1);
const int MX = 2e5 + 5;

int main(){

  ios_base::sync_with_stdio(0); cin.tie(0);
  int n; cin >>n ;
  map<int, bool> m;
  m[n] = 1;
  for(int i = 2; i <= 1000000; i++)
  {
    if(n%2){
      n = n*3 +1;
      if(m[n]){
        cout << i << nl;
        return 0;
      }
      m[n] = 1;
    }
    else{
      n /= 2;
      if(m[n]){
        cout << i << nl;
        return 0;
      }
      m[n] = 1;
    }
  }





  return 0;
}

