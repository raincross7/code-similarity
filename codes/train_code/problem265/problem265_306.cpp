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

char toLowerCase(char c){
  if(isLowerCase(c)){
    return c;
  }else{
    return c+'a'-'A';
  }
}
char toUpperCase(char c){
  if(isLowerCase(c)){
    return c-('a'-'A');
  }else{
    return c;
  }
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

const string yesno(bool ans){
  return (ans?"Yes":"No");
}
int main() {
  int n,k;cin>>n>>k;
  map<int,int> mp;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    mp[a]++;
  }
  int s=mp.size();
  if(s<=k){
    cout<<0<<endl;
  }else{
    int r=s-k;
    map<int,vector<int>> ans;
    for(auto it:mp){
      int val=it.second;
      ans[val].push_back(it.first);
    }
    int a=0;
    auto it=ans.begin();
    for(auto it:ans){
      int c=it.second.size();
      if(c<=r){
        a+=it.first*c;
        r-=c;
      }else{
        a+=it.first*r;
        r=0;
      }
      if(r==0){
        break;
      }
    }
    cout<<a<<endl;
  }
  return 0;
}