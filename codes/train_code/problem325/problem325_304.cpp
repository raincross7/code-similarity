#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

typedef int _loop_int;
#define REP(i,n) for(_loop_int i=0;i<(_loop_int)(n);++i)
#define FOR(i,a,b) for(_loop_int i=(_loop_int)(a);i<(_loop_int)(b);++i)
#define FORR(i,a,b) for(_loop_int i=(_loop_int)(b)-1;i>=(_loop_int)(a);--i)

#define DEBUG(x) cout<<#x<<": "<<x<<endl
#define DEBUG_VEC(v) cout<<#v<<":";REP(i,v.size())cout<<" "<<v[i];cout<<endl
#define ALL(a) (a).begin(),(a).end()

#define CHMIN(a,b) a=min((a),(b))
#define CHMAX(a,b) a=max((a),(b))

// mod
const ll MOD = 1000000007ll;
#define FIX(a) ((a)%MOD+MOD)%MOD

// floating
typedef double Real;
const Real EPS = 1e-11;
#define EQ0(x) (abs(x)<EPS)
#define EQ(a,b) (abs(a-b)<EPS)
typedef complex<Real> P;

int n,l;
int a[125252];

int main(){
  scanf("%d%d",&n,&l);
  REP(i,n)scanf("%d",a+i);
  int last = -1;
  REP(i,n-1){
    if(a[i]+a[i+1] >= l){
      last = i;
      break;
    }
  }
  if(last==-1){
    puts("Impossible");
  }else{
    puts("Possible");
    REP(i,last){
      printf("%d\n",i+1);
    }
    FORR(i,last+1,n-1){
      printf("%d\n",i+1);
    }
    printf("%d\n",last+1);
  }
  return 0;
}
