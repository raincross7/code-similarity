#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i< (int)(b); ++i)
#define ALL(x) (x).begin(),(x).end()
#define rALL(x) (x).rbegin(),(x).rend()
typedef long double ld;
using ll=long long;
using namespace std;
const int mod=1e9+7;
const ll inf = 1LL << 60;
const ld pi = (acos(-1));
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }




int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(20);

  
  int n; cin >> n;
  int f=0,m=n;
  while(m){
    m/=10;
    f++;
  }
  int ans=0;
  for(int i=0;i<f;i+=2){
    ans+=9*pow(10,i);
  }
  if(f%2!=0)  ans-=(pow(10,f)-n-1);
  cout << ans << endl;
}