#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
#include <functional>
#include <stack>
#include <iomanip>
#include <limits>
using namespace std;
#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;
using Graph=vector<vector<int>>;
using edge= struct{int to;ll cost;};
template<class t,class u> void chmax(t&a,u b){if(a<b)a=b;}
template<class t,class u> void chmin(t&a,u b){if(b<a)a=b;}
typedef priority_queue<ll> PQ_HIGH;
typedef priority_queue<ll,VL,greater<ll>> PQ_LOW;//昇順

int main(){
  ll n,k;cin>>n>>k;
  vector<char> past(n,'0');
  int R,S,P;
  cin>>R>>S>>P;
  string s;cin>>s;
  ll ans=0;
  for(int i=0;i<n;i++){
    if(i>=k){
      if(past[i-k]==s[i]){
        continue;
      }
    }
    if(s[i]=='r'){
      //cout<<"R"<<i<<endl;
      past[i]='r';
      ans+=P;
    }else if(s[i]=='s'){
      //cout<<"S"<<i<<endl;
      past[i]='s';
      ans+=R;
    }else if(s[i]=='p'){
      //cout<<"P"<<i<<endl;
      past[i]='p';
      ans+=S;
    }
  }
  cout<<ans<<endl;
}