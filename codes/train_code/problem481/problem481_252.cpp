#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
typedef long long ll;
#define _GLIBCXX_DEBUG
typedef vector<int> vec;
typedef vector<ll> lvec;
typedef vector<char> cvec;
typedef vector<double> dvec;
typedef pair<ll, ll> LP;
typedef tuple<ll, ll, ll> LT;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;
#define fs first
#define sc second
int main()	{
  string s;
  cin>>s;
  int ans=999999;
  rep(i,2){
    int cnt=0;
    rep(j,s.size()){
      if(j%2==0 && s[j]==(char)(i+'0'))
         cnt++;
      if(j%2==1 && s[j]!=(char)(i+'0'))
         cnt++;
    }
    ans=min(ans,cnt);
  }
  cout<<ans<<endl;
}
              