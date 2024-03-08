#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <set>
#include <map>
#include <iostream>
#include <utility>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <limits.h>
#include <cstring>
#include <tuple>
#include <cassert>
#include <numeric>
using namespace std;
// type alias
typedef long long LL;
typedef vector < int > VI;
typedef unordered_map < int, int > MAPII;
typedef unordered_set < int > SETI;
typedef pair< int , int > II;
typedef tuple< int, int, int > III;
template<class T> using VV=vector<vector<T>>;
// repetition
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)
#define REPE(i,n)  for(int i=0;i<=(n);++i)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  for(int i=0;i<(n);++i)
#define FORR(x,arr) for(auto& x:arr)
#define SZ(a) int((a).size())
// DP
#define MINUS(dp) memset(dp, -1, sizeof(dp))
#define ZERO(dp) memset(dp, 0, sizeof(dp))
// minmax
#define SMAX(a,b) a = max(a,b)
#define SMIN(a,b) a = min(a,b)
// debug cerr
#define TRACE true
#define dump(x) if(TRACE) { cerr << #x << " = " << (x) << endl; }
#define dump2(x,y) if(TRACE) { cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl; }
#define dump3(x,y,z) if(TRACE) { cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << endl; }
#define dump4(x,y,z,a) if(TRACE) { cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << ", " << #z << " = " << (z) << ", " << #a << " = " << (a) << endl; }
#define dumpAR(ar) if(TRACE) { FORR(x,(ar)) { cerr << x << ','; } cerr << endl; }

/*

 8/11/2018

 16:40-16:50 analysis
 16:51-16:57 implement
 16:58 bug fix of RE (array size)

 Editorials:
  - https://atcoder.jp/img/abc051/editorial.pdf
  - https://youtu.be/BiQNjJohMMI?t=2655
  - http://ronly.hatenablog.com/entry/2017/10/15/195404
  - http://hamko.hatenadiary.jp/entry/2017/04/09/143727
  - https://kimiyuki.net/writeup/algo/atcoder/abc-051-d/
  - http://ukuku09.hatenablog.com/entry/2017/02/17/013053
  - https://babcs2035.hateblo.jp/entry/2018/06/17/220844


 7/14/2020 23:25-23:36 pause
 7/15/2020 9:20-9:34 AC

 */

// $ cp-batch CandidatesOfNoShortestPaths | diff CandidatesOfNoShortestPaths.out -
const int MAX_N=1e2+1;
const int MAX_M=1e3+1;
int N,M;
int mx[MAX_N][MAX_N];
int A[MAX_M],B[MAX_M],W[MAX_M];
const int Inf=1e7;

void solve() {
  VV<int> mx(N,VI(N,Inf));
  VV<int> es(N,VI(N,-1));
  REP(i,N) mx[i][i]=0;
  REP(i,M) {
    int u=A[i],v=B[i],w=W[i];
    mx[u][v]=mx[v][u]=w;
    es[u][v]=es[v][u]=0;
  }

  REP(k,N)REP(i,N)REP(j,N) {
    int d=mx[i][k]+mx[k][j];
    if(d<mx[i][j]) {
      mx[i][j]=d;
      if(es[i][j]==0) es[i][j]=1;
    }
  }

  int res=0;
  REP(j,N)REP(i,j) res+=(es[i][j]==1);
  cout<<res<<endl;
}

void solve_org() {
  ZERO(mx);
  REP(i,N)REP(j,N)if(i!=j)mx[i][j]=Inf;
  REP(i,M)mx[A[i]][B[i]]=mx[B[i]][A[i]]=W[i];
  REP(k,N)REP(i,N)REP(j,N)SMIN(mx[i][j],mx[i][k]+mx[k][j]);
  int res=0;
  REP(i,M){
    int x=A[i],y=B[i],w=W[i];
    bool ok=false;
    REP(u,N)REP(v,N) {
      if(mx[u][v]==mx[u][x]+w+mx[y][v]) ok|=true;
    }
    if(!ok) ++res;
  }
  cout<<res<<endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  cin>>N>>M;
  REP(i,M) {
    cin>>A[i]>>B[i]>>W[i];
    A[i]--,B[i]--;
  }
  solve();
  return 0;
}
