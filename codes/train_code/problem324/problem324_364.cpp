#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;

#define all(v) v.begin(), v.end()

const ll mod=1000000007;

ll countBits(ll in){
  int res=0;
  for(;in>0;in>>=1){
    if((in&0x01)!=0){
      res++;
    }
  }
  return res;
}

template<typename T>
void show2dVector(vector<vector<T>>& v){
  for(int i=0;i<v.size();i++){
    int m=v[i].size();
    cout<<i<<" : ";
    for(int j=0;i<m;i++){
      cout<<v[i][j]<<" ";
    }
    cout<<endl;
  }
}

void bfs(const vector<vector<int>>&g, int v, vector<bool>& seen){
  seen[v]=true;
  cout<<v<<" ";
  for(auto next: g[v]){
    if(seen[next]){
      continue;
    }
    bfs(g,next,seen);
  }
}

bool dfs(vector<vector<int>> &g,int start,int goal,vector<bool>&seen){
  bool res=false;
  seen[start]=true;
  if(start==goal){
    return true;
  }
  for(auto next: g[start]){
    if(seen[next]){
      continue;
    }
    res=dfs(g,next,goal,seen);
    if(res){
      break;
    }
  }
  return res;
}

ll gcd(ll a,ll b) {
  return b? gcd(b,a%b): a;  
}
ll lcm(ll a,ll b) {
  return a*b/gcd(a,b);
}
bool isLowerCase(char c){
  return (c>='a'&&c<='z');
}

ll powm(ll a,ll n, ll m){
  ll ret=1;
  while(n>0){
    if(n%2==1){
      ret=(ret*a)%m;
    }
    n>>=1;
    a=(a*a)%m;
  }
  return ret;
}

void primeFactor(ll val, map<ll,ll> &primeList){
  cerr<<__FUNCTION__<<":start"<<endl;
  if(val<1){
    return;
  }
  for(int i=2;i*i<val;i++){
    while(val%i==0){
      primeList[i]++;
      val/=i;
    }
  }
  if(val!=1){
    primeList[val]=1;
  }
  cerr<<__FUNCTION__<<":end"<<endl;

  return;
}

const string yesno(bool ans){
  return (ans?"Yes":"No");
}
int main() {
  ll n;cin>>n;
  int ans=0;
  map<ll,int> pl;
  for(ll i=2;i*i<n;i++){
    while(n%i==0){
      pl[i]++;
      n/=i;
    }
  }
  if(n!=1){
    pl[n]=1;
  }
  for(auto it:pl){
    int d=it.second;
    for(int s=1;s<=d;s++){
      d-=s;
      ans++;
    }
  }
  cout<<ans<<endl;
  return 0;
}
