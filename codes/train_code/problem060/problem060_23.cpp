//Coded by Abhijay Mitra
#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <cstdio>
#include <numeric>
#include <cstring>
#include <numeric>
#include <vector>
#include <iterator> 
#include <map>
#include <set>
#include <climits>
#include <queue>
#include <cmath>
#include <stack>
#include <cctype>
#include <bitset>
// #include <bits/stdc++.h>
#define double long double
#define int long long int
#define ll int
#define ibs ios_base::sync_with_stdio(false)
#define cti cin.tie(0)
#define bp __builtin_popcount
#define pb push_back
#define res(v) v.resize(unique(v.begin(), v.end()) - v.begin());
#define cnt_res(v) std::distance(v.begin(),std::unique(v.begin(), v.end())); 
#define timer cerr << "Time elapsed : " << 1.0 * clock() / CLOCKS_PER_SEC << " sec \n";
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using pii = std::pair<int,int>;
using vpii = std::vector<pii>;
using vvpii = std::vector<vpii>;
#define mp         make_pair
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define per(i,b,a) for (int i = b; i >= a; i--)
#define all(x)     x.begin(), x.end()
using namespace std;
const int N=2e6+10;
const int inf = /*0x3f3f3f3f*/1e18+10;
// const ll M = 998244353 ; // Mulo
const int M = 1e9+7 ; // Mulo
const double Pi = 3.14159265;
#define F first
#define S second
int n,x,y;vi a[N];pii dp[N];
int mul(int x,int y){
  return ((x%M)*(y%M))%M;
}
int add(int x,int y){
  return(((x%M)+(y%M)))%M;
}
void dfs(int u,int p=0){
  dp[u]={1,1};
  //black,white
  for(auto i:a[u])
    if(i!=p)
      {
        dfs(i,u);
        dp[u].F=mul(dp[u].F,dp[i].S);
        dp[u].S=mul(dp[u].S,add(dp[i].F,dp[i].S));
      }
}
void solve(){
  cin>>n;
  rep(i,0,n-2){
    cin>>x>>y;
    a[x].pb(y);
    a[y].pb(x);
  }
  dfs(1);
  cout<<add(dp[1].F,dp[1].S);
}
int32_t main()
{
  ibs;cti;
  solve()
  /*,cout<<"\n"*/;
  // cout<<"\n";
  int xx=0;
  // int t;cin>>t;while(t--){/*xx++;cout<<"Case "<<xx<<":\n"*/;solve();cout<<"\n";}
  return 0;
}