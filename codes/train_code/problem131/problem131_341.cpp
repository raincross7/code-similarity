#include <bits/stdc++.h>
using namespace std;
#define rep(i,N) for(int i=0,i##_max=(N);i<i##_max;++i)
#define repp(i,l,r) for(int i=(l),i##_max=(r);i<i##_max;++i)
#define per(i,N) for(int i=(N)-1;i>=0;--i)
#define perr(i,l,r) for(int i=r-1,i##_min(l);i>=i##_min;--i)
#define all(arr) (arr).begin(), (arr).end()
#define SP << " " <<
#define SPF << " "
#define SPEEDUP cin.tie(0);ios::sync_with_stdio(false);
#define MAX_I INT_MAX //1e9
#define MIN_I INT_MIN //-1e9
#define MAX_UI UINT_MAX //1e9
#define MAX_LL LLONG_MAX //1e18
#define MIN_LL LLONG_MIN //-1e18
#define MAX_ULL ULLONG_MAX //1e19
  typedef long long ll;
  typedef pair<int,int> PII;
  typedef pair<char,char> PCC;
  typedef pair<ll,ll> PLL;
  typedef pair<char,int> PCI;
  typedef pair<int,char> PIC;
  typedef pair<ll,int> PLI;
  typedef pair<int,ll> PIL; 
  typedef pair<ll,char> PLC; 
  typedef pair<char,ll> PCL; 

inline void YesNo(bool b){ cout << (b?"Yes" : "No") << endl;}
inline void YESNO(bool b){ cout << (b?"YES" : "NO") << endl;}
inline void Yay(bool b){ cout << (b?"Yay!" : ":(") << endl;}

int main(void){
  SPEEDUP
  cout << setprecision(15);
  double n;
  double m;
  double d;
  cin >> n >> m >> d;
  if(d!=0.0)cout << 2.0*(n-d)*(m-1.0)/(n*n) << endl;
  else cout << (n-d)*(m-1.0)/(n*n) << endl;
  return 0;
}

//n通りある
//n*n通りある．そのうち1*2*(n-d)*n**0通りが成り立つ
//n*n*n通りあるそのうち2*2*(n-d)*n通り
//n**4通りある．そのうち3*2*(n-d)*n**2通りが成り立つ
//n**5通りある．そのうち4*2*(n-d)*n**3通り

//(m-1)*2*(n-d)*n**(m-2);
//2通りある
//4通りある．そのうち2通りが成り立つ
