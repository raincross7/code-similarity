#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <queue>
using namespace std;
 
#define LOCAL  1
#define UPLOAD 2
 
#define ll long long
const long long INF = 1LL << 60;
 
template <class T = long long> T input(){T x;cin >> x;return x;}
template <class T> void output(T x){cout << x << endl;}
#define debug(x) cerr << #x<< ": " << x<< '\n';
#define debugBit(x,n) cerr << #x<< ": " << std::bitset<n>(x) << '\n';
#define REP(i,M) for(int i=0;i<M;i++)
 
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b;return true;}return false;}
ll gcd(ll x,ll y){return y?gcd(y,x%y):x;}
 
int main()
{
#if ENVIRONMENT == LOCAL
    std::ifstream in("input.txt");
    std::cin.rdbuf(in.rdbuf());
#endif
  
  ll K = input();
  ll A = input();
  ll B = input();

  float f = (float)A / (float)K;
  float f2 = (float)B / (float)K;
  ll answer = ceil(f);

  if(answer <= f2){
    output("OK");
  }
  else{
    output("NG");
  }
  
  return 0;
}