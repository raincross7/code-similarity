#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using pint = pair<int,  int>;
using pll = pair<ll, ll>;
using edge = pair<int, ll>;
using Graph = vector<vector<int>>; 
using WeightedGraph = vector<vector<edge>>;
const ll INF = 1LL << 60;
const int INF32 = 1 << 29;
const ll MOD = 1000000007;

int main(){
  string s;cin >> s;
  int n = s.size();
  int j = n-1;
  int ans = 0;
  for(int i = 0; i < n; ++i){
    if(i >= j){break;}
    if(s[i]==s[j]){--j;continue;}
    if(s[i]=='x'){++ans;}
    else if(s[j]=='x'){++ans;--j;--i;}
    else{ans= -1;break;}
  }
  cout << ans << endl;
}
