#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define REP(a,b) for(int a=0;a<(b);++a)
#define REP1(i,n) for(int i=1;i<=(n);++i)
#define debug(x) cerr<<#x<<": "<<x<<'\n'
#define all(x) (x).begin(),(x).end()
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
// #define INF (1<<29)

const long long INF = 1LL<<60;

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
ll RS(ll N,ll P,ll m){
    if(P==0){
        return 1;
    }else{
        if(P%2==0){
            ll t=RS(N,P/2,m);
            return t*t%m;
        }else{
            return N*RS(N,P-1,m)%m;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    int N;cin>>N;
    vector<int> A;
    int cnt_m=0;
    int cnt_p=0;
    REP(i, N) {
        int a=in();
        if(a<0)cnt_m++;
        if(a>=0)cnt_p++;
        A.pb(a);
    }
    sort(all(A));
    if(N==2){
        cout<<A[1]-A[0]<<endl;
        cout<<A[1]<<" "<<A[0]<<endl;
        return 0;
    }
    if(cnt_m==0){
        int m=0;
        m=(-1)*A[0];
        REP1(i,N-1){
            m+=A[i];
        }
        cout<<m<<endl;
        int temp=A[0];
        REP(i,N-2){
            cout<<temp<<" "<<A[i+1]<<endl;
            temp=temp-A[i+1];
        }
        cout<<A[N-1]<<" "<<temp<<endl;
        return 0;
    }
    if(cnt_p==0){
        int m=0;
        m=A[N-1];
        REP(i,N-1){
            m-=A[i];
        } 
        cout<<m<<endl;
        int temp=A[N-1];
        REP(i,N-1){
            cout<<temp<<" "<<A[i]<<endl;
            temp-=A[i];
        }
        return 0;
    }
    vector<int> p;
    vector<int> m;
    vector<pair<int,int>> ans;
    REP(i,N){
        if(A[i]<0){
            m.pb(A[i]);
        }else{
            p.pb(A[i]);
        }
    }
    int temp=m[m.size()-1];
    m.pop_back();
    int p_max=p[p.size()-1];
    p.pop_back();
    for(auto i:p){
        ans.emplace_back(temp,i);
        temp-=i;
    }
    ans.emplace_back(p_max,temp);
    temp=p_max-temp;
    for(auto i:m){
        ans.emplace_back(temp,i);
        temp-=i;
    }
    cout<<temp<<endl;
    REP(i,N-1){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
} 