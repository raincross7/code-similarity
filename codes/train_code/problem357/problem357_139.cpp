#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b)  for(int i=(a),i##formax=(b);i< i##formax;i++)
#define FORR(i,a,b) for(int i=(a),i##formin=(b);i>=i##formin;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pcnt __builtin_popcount
#define sz(x) (int)(x).size()
#define maxs(x,y) x=max((x),(y))
#define mins(x,y) x=min((x),(y))
#define show(x) cout<<#x<<" = "<<(x)<<endl;
#define all(a) ((a).begin()),((a).end())
#define each(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define bit(n) (1LL<<(n))
typedef long long ll;
typedef __int128_t lll;
template<class T>using V=vector<T>;
template<class T>using VV=V<V<T>>;
template<class T,class Y>using P=pair<T,Y>;
template<class T,class Y>ostream& operator<<(ostream&o,P<T,Y>&p){return o<<"("<<p.fi<<","<<p.se<<")";}
template<class T>ostream& operator<<(ostream&o,V<T>&v){for(T&t:v)o<<t<<",";return o<<endl;}
template<class T>void uniq(V<T>&v){sort(all(v));v.erase(unique(all(v)), v.end());}
template<typename A, size_t N, typename T>void Fill(A (&a)[N], const T &v){fill((T*)a,(T*)(a+N),v);}

lll gcd(lll a,lll b,lll&x,lll&y){if(!b){x=1;y=0;return a;}lll d=gcd(b,a%b,y,x);y-=a/b*x;return d;}
ll modInv(ll a,ll m){lll x,y;gcd(a,m,x,y);return(x%m+m)%m;}
ll modPow(lll a,lll n,ll m){lll p=1;for(;n;n>>=1,a=a*a%m)if(n&1)p=p*a%m;return p;}
V<ll>F,R;void setF(int n,int mod){F=R=V<ll>(++n);F[0]=1;FOR(i,1,n)F[i]=F[i-1]*i%mod;R[n-1]=modInv(F[n-1],mod);FORR(i,n-1,1)R[i-1]=R[i]*i%mod;}
ll comb(int a,int b,int m){return a<b||b<0?0:F[a]*R[b]%m*R[a-b]%m;}

const int IINF = 1e9+6;
const ll LINF = 1e18;
const int MOD=1e9+7;
const int N=1e5+1;
P<int, int> A[9][9], B[9][9][9];
main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  FOR(i, 1, 10)FOR(j, 1, 10){
    int k=i, l=0, m=0;
    do{
      B[i-1][j-1][l] = mp(k-1, m);
      l++;
      m++;
      k += j;
      if(k>9){
        m++;
        k = k%10+1;
      }
    }while(k != i);
    A[i-1][j-1] = mp(l, m);
  }
  int m, p;
  cin >> m;
  ll ans = 0;
  FOR(i, 0, m){
    int d;
    ll c;
    cin >> d >> c;
    if(!d){
      ans += c;
      continue;
    }
    d--;
    if(!i){
      p = d;
      c--;
    }
    P<int, int> t = A[p][d];
    ans += c/t.fi*t.se;
    c %= t.fi;
    ans += B[p][d][c].se;
    p = B[p][d][c].fi;
  }
  cout << ans << endl;
}