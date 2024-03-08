#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define REP(a,b) for(int a=0;a<(b);++a)
#define REP1(i,n) for(int i=1;i<=(n);++i)
#define debug(x) cerr<<#x<<": "<<x<<'\n'
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define YES() printf("YES\n")
#define NO() printf("NO\n")
#define isYES(x) printf("%s\n",(x) ? "YES" : "NO")
#define Yes() printf("Yes\n")
#define No() printf("No\n")
#define isYes(x) printf("%s\n",(x) ? "Yes" : "No")
#define isPossible(x) printf("%s\n",(x) ? "Possible" : "Impossible")
#define SZ(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define INF (1<<29)

// const long long INF = 1LL<<50;

#define Sp(p) cout<<setprecision(25)<< fixed<<p<<endl
#define vi vector<int>
#define vl vector<ll>
#define vii vector< vector<int> >
#define vll vector< vector<ll> >
#define vs vector<string>
#define pii pair<int,int>
#define pis pair<int,string>
#define psi pair<string,int>
#define pll pair<ll,ll>
#define pie 3.14159265358979323846
using namespace std;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;
template<class T=int>
T in(){T x;cin>>x;return (x);}
template<class T>
void print(T& x){cout<<x<<'\n';}

const int MOD =(int)1e9+7;
// const int mod =(int)998244353;
const int mod =(int)1e9+7;

const int MAX =510000;
ll fac[MAX],finv[MAX],inv[MAX];
void COMint(){
    fac[0]=fac[1]=1;
    finv[0]=finv[1]=1;
    inv[1]=1;
    for(int i=2;i<MAX;i++){
        fac[i]=fac[i-1]*i%MOD;
        inv[i]=MOD-inv[MOD%i]*(MOD/i)%MOD;
        finv[i]=finv[i-1]*inv[i]%MOD;
    }
}
ll COM(int n,int k){
    if(n<k) return 0;
    if(n<0||k<0)return 0;
    return fac[n]*(finv[k]*finv[n-k]%MOD)%MOD;
}
ll gcd(ll a,ll b){
    if(a<0)a=-a;
    if(b<0)b=-b;
    if(b==0)return a;
    if(a>b){
        swap(a,b);
    }
    return gcd(a,b%a);
}
ll lcm(ll a,ll b){
  if(a<0)a=-a;
  if(b<0)b=-b;
    ll g;g=gcd(a,b);
    return b/g*a;
}
bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}
bool compare_by_a(pair<int, int> a, pair<int, int> b) {
    if(a.first != b.first){
        return a.first < b.first;
    }else{
        return a.second < b.second;
    }
}
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
struct Sieve{
     int n;
     vector<int>f,primes;
     Sieve(int n=1):n(n),f(n+1){
         f[0]=f[1]=-1;
         for(ll i=2;i<=n;++i){
             if(f[i])continue;
             primes.push_back(i);
             f[i]=i;
             for(ll j=i*i;j<=n;j+=i){
                 if(!f[j])f[j]=i;
             }
         }
     }
     bool isPrime(int x){return f[x]==x;}
     vector<int>factorList(int x){
         vector<int> res;
         while(x!=1){
             res.push_back(f[x]);
             x/=f[x];
         }
         return res;
     }
     vector<P>factor(int x){
         vector<int>fl=factorList(x);
         if(fl.size()==0)return {};
         vector<P>res(1,P(fl[0],0));
         for(int p:fl){
             if(res.back().first==p){
                 res.back().second++;
             }else{
                 res.emplace_back(p,1);
             }
         }
         return res;
     }
 };
//int N, M, K, T, H, W, L, R;
long long int N, M, K, T, H, W, L, R;
int main() {
    ios::sync_with_stdio(false);
    int N=in();
    vector<int> A(N);
    REP(i, N) cin >> A[i];
    COMint();
    int gcd_all;
    gcd_all=A[0];
    REP(i,N){
        gcd_all=gcd(gcd_all,A[i]);
    }
    Sieve s(1001001);
    map<int,int>prime_map;
    REP(i,N){
        vector<P> fac=s.factor(A[i]);
        for(auto i=fac.begin();i!=fac.end();i++){
            int a=i->first;
            if(prime_map[a]>0){
                if(gcd_all==1){
                    cout<<"setwise coprime"<<endl;
                    return 0;
                }else{
                    cout<<"not coprime"<<endl;
                    return 0;
                }
            }else{
                prime_map[a]=1;
            }
        }
    }
    cout<<"pairwise coprime"<<endl;
    
    return 0;
} 
 