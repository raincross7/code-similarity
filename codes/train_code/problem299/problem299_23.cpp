#include <bits/stdc++.h>
#define REP(i, n) for (int (i) = 0; (i) < (int)(n); i++) 
#define FOR(i, a, b) for(int (i) = a; (i) < (int)b; i++)
#define RREP(i, n) for(int (i)=((int)(n)-1); (i)>=0; i--)
#define RFOR(i, a, b) for(int (i) =((int)(b)-1); (i)>=(int)a; i--)
#define ALL(v) (v).begin(),(v).end()
#define MOD 1000000007
#define FI first
#define SE second
#define MP make_pair
#define PB push_back
#define SZ(x)  (int)x.size()
#define SP(x)  setprecision((int)x)


using namespace std ;
typedef long long ll;
typedef vector<int> vint;
typedef vector<vint> vvint;
typedef vector<string> vstr;
typedef pair<int, int> pii;
const int INF = 1e9;
const ll LINF = 1e18;
const double EPS = 1e-9;
ll gcd(ll a, ll b) {return b ? gcd(b, a % b) : a;} //最大公約数
ll lcm(ll a, ll b) {return a / gcd(a, b) * b;} //最小公倍数


int main()
{
  ll a, b, k ;
  cin >> a >> b >> k ;
  int i = 1 ;
  while(i<=k){
    if(i%2==1){
      if(a%2==1){
        a-- ;
      }
      b += a/2 ;
      a /= 2 ;
    }
    else if(i%2==0){
      if(b%2==1){
        b-- ;
      }
      a += b/2 ;  
      b /= 2 ;
    }
    i++ ;
  }
  
  cout << a <<endl ;
  cout << b <<endl ;
    
    
      


  return 0 ;
}