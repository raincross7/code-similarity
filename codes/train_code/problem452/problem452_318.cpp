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
  int64_t N,K;
  cin>>N>>K;
  map<int,int64_t>k;
  for(int i=0;i<N;i++){
    int a,b;
    cin>>a>>b;
    k[a]+=b;
  }
  int64_t cnt=K;
  for(auto c:k){
    cnt-=c.second;
    if(cnt<=0){cout<<c.first<<endl;return 0;}
  }
  return 0;  
}