#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
#include<queue>
#include<vector>
#include <bitset>
using namespace std;
#define INF 110000000000
#define MOD 1000000007
typedef long long ll;
typedef pair<ll,int> P;

vector<ll> V[110000],T,S;
ll sumT[110000],sumS[110000];

int main(){
  int N,K,t;
  ll d;
  cin>>N>>K;
  for(int i=0;i<N;i++){
    cin>>t>>d;
    t--;
    V[t].push_back(d);
  }

  for(int i=0;i<N;i++){
    sort(V[i].begin(),V[i].end(),greater<ll>());
  }
  for(int i=0;i<N;i++){
    for(int j=0;j<(int)V[i].size();j++){
      if(j==0) T.push_back(V[i][j]);
      else S.push_back(V[i][j]);
    }
  }

  sort(T.begin(),T.end(),greater<ll>());
  sort(S.begin(),S.end(),greater<ll>());

  for(int i=0;i<(int)T.size();i++){
    sumT[i+1]=sumT[i]+T[i];
  }
  for(int i=0;i<(int)S.size();i++){
    sumS[i+1]=sumS[i]+S[i];
  }
  ll ans=0;
  for(int i=0;i<=K;i++){
    if((int)T.size()>=i)
    ans=max(ans,sumT[i]+sumS[K-i]+i*i);
  }
  cout<<ans<<endl;






}
