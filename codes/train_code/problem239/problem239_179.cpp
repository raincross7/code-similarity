#include<bits/stdc++.h>
#define rep(i,N) for(ll (i)=0;(i)<(N);(i)++)
#define chmax(x,y) x=max(x,y)
#define chmin(x,y) x=min(x,y)
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int mod = 1000000007;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  string key = "keyence";
  for(int i = 0; i <= key.size(); ++i){
    string f = s.substr(0, i);
    string b = s.substr(n - (key.size() - i), key.size() - i);
    string fb = f + b;
    if(key == fb)  {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
}