#include<bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; i++)
#define repo(i, n) for(int i=1; i<=n; i++)
#define INF 1001001001
#define INFll 100100100100100
// debug用
#define PrintVec(x) for (auto elementPrintVec: x) { cout << elementPrintVec << " "; } cout << endl;

using namespace std;
using ull = unsigned long long;
using ll = long long;
using P = pair<int, int>;
const int mod = 1000000007;

int main(){
  string s, t;
  cin >> s;
  cin >> t;
  int n=s.size(), ans=0;
  rep(i, n){
    if(s[i]!=t[i]){
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
