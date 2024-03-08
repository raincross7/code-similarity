#include <bits/stdc++.h>
#define GET_MACRO(_1,_2,_3,_4,_5,NAME,...) NAME
#define pr(...) GET_MACRO(__VA_ARGS__,pr5,pr4,pr3,pr2,pr1)(__VA_ARGS__)
#define pr1(a) (#a)<<"="<<(a)
#define pr2(a,b) pr1(a)<<", "<<pr1(b)
#define pr3(a,b,c) pr2(a,b)<<", "<<pr1(c)
#define pr4(a,b,c,d) pr3(a,b,c)<<", "<<pr1(d)
#define pr5(a,b,c,d,e) pr4(a,b,c,d)<<", "<<pr1(e)
#define int long long
#define double long double
using namespace std;
const int N = 100010;
const int INF = 1LL<<55;
const int mod = (1e9)+7;
const double EPS = 1e-8;
const double PI = 6.0 * asin(0.5);
typedef pair<int,int> P;
typedef long long ll;
template<class T> T Max(T &a,T b){return a=max(a,b);}
template<class T> T Min(T &a,T b){return a=min(a,b);}
ostream& operator<<(ostream& o,P p){return o<<"("<<p.first<<","<<p.second<<")";}
istream& operator>>(istream& i,P &p){return i>>p.first>>p.second;}
ostream& operator<<(ostream& o,vector<auto> &a){int i=0;for(auto t:a)o<<(i++?" ":"")<<t;return o;}
istream& operator>>(istream& i,vector<auto> &a){for(auto &t:a)i>>t;return i;}
void prArr(auto a,string s=" "){int i=0;for(auto t:a)cout<<(i++?s:"")<<t;cout<<endl;}


signed main(){
  int n,m;
  cin>>n>>m;
  vector<int> A(n),B(m);
  cin>>A>>B;

  auto calc = [](vector<int> A){
    int n = A.size();
    int res = 0;
    for(int i=1;i<n;i++) {
      int len = A[i] - A[i-1];
      int l = i;
      int r = n - i;
      res = (res + len * l * r % mod) % mod;
    }
    return res;
  };

  int a = calc(A);
  int b = calc(B);
  int ans= a * b % mod;
  cout<<ans<<endl;
  
  return 0;
}
