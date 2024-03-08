#include <bits/stdc++.h>
 
const double pi = 3.141592653589793238462643383279;
 
 
using namespace std;
//typedef
//------------------------------------------
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<string> VS;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef pair<int, PII> TIII;
typedef long long LL;
typedef unsigned long long ULL;
typedef vector<LL> VLL;
typedef vector<VLL> VVLL;
 
 
//container util
//------------------------------------------
#define ALL(a)  (a).begin(),(a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
#define SQ(a) ((a)*(a))
#define EACH(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
 
 
//repetition
//------------------------------------------
#define FOR(i,s,n) for(int i=s;i<(int)n;++i)
#define REP(i,n) FOR(i,0,n)
#define MOD 1000000007
 
 
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
 
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
const double EPS = 1E-10;
 
#define chmin(x,y) x=min(x,y)
#define chmax(x,y) x=max(x,y)


//ここから編集
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(10);

  int N; cin >> N;

  string s;
  cout << 0 << endl;
  flush(cout);

  cin >> s;
  if(s == "Vacant"){
    return 0;
  }

  if(s == "Female"){

    int lb = 0, ub = N;
    for(int i=0; i<19; i++){
      int mid = (lb+ub) >> 1;
      
      cout << mid << endl;
      flush(cout);
      string t;
      cin >> t;

      if(t == "Vacant"){
        return 0;
      }
      if(mid % 2 == 1){
        if(t == "Male"){
          lb = mid;
        }else{
          ub = mid+1;
        }
      }else{
        if(t == "Male"){
          ub = mid+1;
        }else{
          lb = mid;
        }
      }
    }
  }else{

    int lb = 0, ub = N;
    for(int i=0; i<19; i++){
      int mid = (lb+ub) >> 1;
      
      cout << mid << endl;
      flush(cout);
      string t;
      cin >> t;

      if(t == "Vacant"){
        return 0;
      }
      if(mid % 2 == 1){
        if(t == "Male"){
          ub = mid+1;
        }else{
          lb = mid;
        }
      }else{
        if(t == "Male"){
          lb = mid;
        }else{
          ub = mid+1;
        }
      }
    }
  }
  
  return 0;
}