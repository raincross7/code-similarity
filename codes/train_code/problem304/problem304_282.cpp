#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <iomanip>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const int mod=1000000007;
const int INF=1001001001;

vector<pair<int64_t,int64_t>>prime_factorize(int64_t x){
  vector<pair<int64_t,int64_t>>p;
  for(int64_t i=2;i*i<=x;i++){
    int cnt=0;
    if(x%i==0){
    while(x%i==0){cnt++;x/=i;}
    p.push_back(make_pair(i,cnt));
    }
  }
  if(x!=1){p.push_back(make_pair(x,1));}
  return p; 
}

int main() {
  string s,t;
  cin>>s>>t;
  int r=s.size(),l=t.size();
  if(r<l){cout<<"UNRESTORABLE"<<endl;return 0;}
  bool AD=false;
  for(int i=r-l;i>=0;i--){
    bool ok=true;
    for(int j=0;j<l;j++){
        if(s[i+j]!='?'&&s[i+j]!=t[j]){ok=false;}
    }
    if(ok){
      AD=true;
      for(int j=0;j<l;j++){
        s[i+j]=t[j];
      }
      break;
    } 
  }
  if(!AD){cout<<"UNRESTORABLE"<<endl;}
  else{
    for(int i=0;i<r;i++){
      if(s[i]=='?'){s[i]='a';}
    }
    cout<<s<<endl;
  }
  
  return 0;  
}