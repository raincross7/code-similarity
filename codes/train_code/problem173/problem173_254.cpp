#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep1(i,n) for(int i=1;i<=(int)n;i++)
#define sp(n) cout << fixed << setprecision(n)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef long long ll;
using namespace std;
int main() {
  ll n;cin>>n;
  ll res=0;
  ll tmp=1;
  while(true){
      ll buf=n-tmp;
      if(buf/tmp<=tmp) break;
      if(buf%tmp==0){
          res+=buf/tmp;
      }
      tmp++;
  }
  cout<<res<<endl;
}