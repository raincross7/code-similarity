#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
typedef long long ll;
int main() {
  int ans=0;
  string s,t;
  cin>>s>>t;
  rep(i,s.length()){
    if(s[i]!=t[i])ans++;
  }
  cout<<ans;
}