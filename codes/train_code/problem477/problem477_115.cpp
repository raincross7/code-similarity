#include <bits/stdc++.h>
using namespace std;
#include <math.h>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF=1001001001;
vector<pair<int64_t,int64_t>>func(int64_t x){
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
  int64_t A,B,C,D;
  cin>>A>>B>>C>>D;
  int64_t ca=(A-1)/C,cb=B/C,da=(A-1)/D,db=B/D;
  int64_t s=C*D/__gcd(C,D);
  int64_t sa=(A-1)/s,sb=B/s;
  int64_t sumB=B-(db+cb)+sb;
  int64_t sumA=A-1-(da+ca)+sa;
  cout<<sumB-sumA<<endl;
  return 0;
}