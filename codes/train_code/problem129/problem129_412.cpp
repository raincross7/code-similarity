#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cctype>
#include <climits>
#include <bitset>
#include <utility>
#include <cstring>
#include <numeric>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<pair<int,int>> vpii;
typedef vector<vector<int>> vvi;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
#define rep(i,n) for(int i=0;i<n;i++)
#define repll(i,n) for(long long int i=0;i<n;i++)
#define fin(ans) cout<<(ans)<<endl
#define P 1000000007
#define STI(s) atoi(s.c_str())//string to int
#define mp(p,q) make_pair(p,q)
#define Sort(a) sort(a.begin(),a.end())
template<class T> inline bool chmax(T& a,T b){if(a<b){a=b;return 1;}return 0;}
template<class T> inline bool chmin(T& a,T b){if(a>b){a=b;return 1;}return 0;}
const int INF = INT_MAX;
const long long LLINF = 1LL<<60;
template <typename T_char>
char ToUpper (char cX) { return toupper(cX); }
//g++ -std=c++1z temp.cpp
//./a.exe
ll digit(ll a){
    ll count = 0;
    for (ll i = 0; i < a; i++)
    {   if (a == 0)
        {
            break;
        }else
        {
            a = a/10;
            count++;
        }
    }
    return count;
}
#include <cstdint>

uintmax_t comb(unsigned int n, unsigned int r) {
  if ( r * 2 > n ) r = n - r;
  uintmax_t dividend = 1;
  uintmax_t divisor  = 1;
  for ( unsigned int i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}
//桁数のカウント
//pow(x,n) == x^n
//sum = accumulate(v.begin(),v.end(),0);
ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b) { return a / gcd(a,   b) * b;}



int main(void){ios::sync_with_stdio(false);cin.tie(0);
/////////////////////////////////////////////////////

ll x,y,i = 1;
cin >> x >> y;
if(x%y == 0){
  cout << -1 << endl;
}else{
  while(1){
    if(x * i %  y != 0){
      cout << x*i << endl;
      return 0;
     }
     if(x*i > pow(10,18)){
       cout << -1 << endl;
       return 0;
     }
     i++;
  }

}


//////////////////////////////////////////////////////
return 0;}
