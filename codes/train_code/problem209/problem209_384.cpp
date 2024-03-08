#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <time.h>
#include <tuple>
#include <utility>
#include <vector>
#define ll long long
#define itn int
#define endl '\n'
#define co(ans) cout<<ans<<endl
#define COYE cout<<"YES"<<endl
#define COYe cout<<"Yes"<<endl
#define COye cout<<"yes"<<endl
#define CONO cout<<"NO"<<endl
#define CONo cout<<"No"<<endl
#define COno cout<<"no"<<endl
#define FORE(i,a) for(auto &i:a)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define FFOR(i,a,b) for(int i=(a);i<=(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define RREP(i,n)  FFOR(i,1,n)
#define PB push_back
#define MP make_pair
#define ALL(V) (V).begin(),(V).end()
#define SORT(V) sort((V).begin(),(V).end())
#define REVERSE(V) reverse((V).begin(),(V).end())
#define EACH(V,i) for(typeof((V).begin()) i=(V).begin();i!=(V).end();++i)
#define equals(a,b) (fabs((a)-(b))<EPS)
#define INF ((1LL<<62)-(1LL<<31))
#define EPS 1e-10
#define PI 3.141592653589793238
#define MOD 1000000007
#define MMOD 998244353
#define MAX 2010101
using namespace std;
using Edge=pair<ll,ll>;
using Graph=vector<vector<int>>;
inline int toInt(string s){int v;istringstream sin(s);sin>>v;return v;}
template<class T>inline string toString(T x){ostringstream sout;sout<<x;return sout.str();}
template<class T>bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T>bool chmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int,int> PII;
typedef pair<ll,ll> PLL;
typedef long long LL;
const int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

////////// Union-Find木 //////////

struct UnionFind{
  vector<int> par,siz;						//par[i]:iの親の番号
  UnionFind(int N):par(N),siz(N,1ll){		//最初は全てが根であるとして初期化
    for(int i=0; i<N; i++) par[i]=i;
  }
  
  int root(int x){						//データxが属する木の根
    if(par[x]==x) return x;
    return par[x]=root(par[x]);
  }
  
  void unite(int x,int y){				//xとyの木を併合
    int rx=root(x);
    int ry=root(y);
    if(rx==ry) return;
    if(siz[rx]<siz[ry]) swap(rx,ry);
    siz[rx]+=siz[ry];
    par[ry]=rx;
  }
  
  bool same(int x,int y){				//x,yが属する木が同じならtrueを返す
    int rx=root(x);
    int ry=root(y);
    return rx==ry;
  }
  
  int size(int x){
    return siz[root(x)];
  }
};

//////////////////////////////////////////////////

int main(){
  int N,M;
  cin>>N>>M;
  
  UnionFind U(N);
  REP(i,M){
    int A,B;
    cin>>A>>B;
    A--,B--;
    U.unite(A,B);
  }
  
  int ans=0;
  REP(i,N) chmax(ans,U.size(i));
  co(ans);
  return 0;
}