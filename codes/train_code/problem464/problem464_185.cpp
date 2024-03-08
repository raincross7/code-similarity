#include<bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define ll long long
#define rep(i,n) for(int i = 0; i < int(n); i++)
#define vi vector<int>
using namespace std;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
template<class T> inline bool chmax(T &a, const T &b){ if(a<b) { a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b){ if(b<a) { a=b; return 1; } return 0; }

int main(){
  cin.tie(0), ios::sync_with_stdio(false);
  int n,m; cin >> n >> m;
  vi imos(n);
  rep(i,m){
    int a,b; cin >> a >> b;
    if(b < a) swap(a,b);
    imos[--a]++;
    imos[--b]--;
  }
  rep(i,n-1) imos[i+1] += imos[i];
  rep(i,n){
    if(imos[i]%2 != 0){
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES";
  cout << "\n";
  return 0;
}
