#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=1;i<=(int)(n);i++)
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
  int ans=0;
  int n;
  cin>>n;
  for(int i=1;i<=n;){
    int cnt=0;
    rep(j,i){
      if(i%j==0)
        cnt++;
    }
    if(cnt==8)
      ans++;
    i+=2;
  }
  cout<<ans<<endl;
}