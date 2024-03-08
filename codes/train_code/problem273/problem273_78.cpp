
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <cmath>
#include <tuple>
#include <iomanip>
#include <numeric>
#include <unordered_map>
#include <sstream>
#include<limits.h>
#include<float.h>
#include<list>
#include <array>
#include <complex>
#include<stdio.h>
#include<string.h>
#include <bitset>
// #include<assert.h>
#include<random>
using namespace std;
#define int long long

#define I32_MAX 2147483647
#define I64_MAX 9223372036854775807LL
#define I64_MAX2 1223372036854775807LL
#define INF I64_MAX2
#define MOD 1000000007
// #define MOD 998244353 
#define MEM_SIZE 10000
#define DEBUG_OUT true
#define ALL(x) (x).begin(), (x).end()

template<typename T> void DEBUG(T e){if(DEBUG_OUT == false)return; std::cout << e <<" ";}
template<typename T> void DEBUG(const std::vector<T>& v){if(DEBUG_OUT == false)return;for(const auto& e : v){std::cout<< e << " "; } std::cout << std::endl;}
template<typename T> void DEBUG(const std::vector<std::vector<T> >& vv){if(DEBUG_OUT == false)return;for(const auto& v : vv){ DEBUG(v); } }
template<class T,class... Ts> void DEBUG(T d, Ts... e){if(DEBUG_OUT == false)return;DEBUG(d);DEBUG(e...);}
template <class T> void corner(bool flg, T hoge) {if (flg) {cout << hoge << endl; abort();}}
template< typename T1, typename T2 > inline bool chmax(T1 &a, T2 b) { return a < b && (a = b, true); }
template< typename T1, typename T2 > inline bool chmin(T1 &a, T2 b) { return a > b && (a = b, true); }

void solve(void)
{ 
  int N,D,A; cin>>N; cin>>D;cin>>A;
  vector<pair<int,int> > vp;
  for (int i = 0; i < N; i++)
  {
    int X,H;cin>>X>>H;
    vp.emplace_back(X,H);
  }
  sort(ALL(vp));
  vector<int> X (N,0);
  vector<int> H (N,0);
  for (int i = 0; i < N; i++)
  {
    X[i] = vp[i].first;
    H[i] = vp[i].second;
  }
  int res = 0;
  int p = 0;
  vector<int> H2(N+1,0);
  int aD = 0;
  while(p < N)
  {
    aD += H2[p];
    // DEBUG(aD,H2[p],H[p]);
    if(H[p] - aD <= 0)
    {
      p++;
      continue;
      DEBUG("call");
    }
    int damage = A*((H[p] -aD)/A + ((H[p]-aD)%A > 0));
    // int damage = A*(ceil(double(H[p]-aD)/double(A)));
    res +=((H[p] -aD)/A + ((H[p]-aD)%A > 0));
    int q = distance(X.begin(),upper_bound(ALL(X),2*D+X[p]));
    
    aD += damage;
    H2[q] -=damage;
    p++;
    // DEBUG(res,aD,"\n");
    // DEBUG(H2);
  }
  cout<<res<<endl;


  
  
  return;
}
int32_t main(int32_t argc, const char *argv[])
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  std::cout << std::fixed;
  std::cout << std::setprecision(11);
  solve();

  return 0;
}
