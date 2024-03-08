#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define ll long long
#define P pair<int,int>
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define pb push_back
#define eb emplace_back
template<class T>void chmax(T &a,T b){if(a<b)a=b;}
template<class T>void chmin(T &a,T b){if(a>b)a=b;}
constexpr int INF=1000000000000000000;
constexpr int mod=1000000007;
constexpr double eps=1e-8;
const double pi=acos(-1);
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int Random(int mi,int ma){
    random_device rnd;
    mt19937 mt(rnd());//32bit
    //[mi,ma]
    uniform_int_distribution<int>engine(mi,ma);
    return engine(mt);
}
int gcd(int a,int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a/gcd(a,b)*b;
}
bool prime(int a){
    if(a==1)return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;
    }
    return true;
}
int modpow(int a,int b){
    if(b==0)return 1;
    if(b%2)return modpow(a,b-1)*a%mod;
    int memo=modpow(a,b/2);
    return memo*memo%mod;
}
vector<int>kaijo,invkaijo;
void init_fact(int n){
    kaijo.resize(n+1);
    invkaijo.resize(n+1);
    kaijo[0]=1;
    for(int i=1;i<=n;i++){
        kaijo[i]=kaijo[i-1]*i;
        kaijo[i]%=mod;
    }
    rep(i,n+1)invkaijo[i]=modpow(kaijo[i],mod-2);
}
int comb(int a,int b){
    if(a<b)return 0;
    if(a<0||b<0)return 0;
    return kaijo[a]*invkaijo[a-b]%mod*invkaijo[b]%mod;
}
int inv(int x){
    x=modpow(x,mod-2);
    return x;
}
signed main(){
    cin.tie(0);ios::sync_with_stdio(false);
    int n=1,len;
    bool flag=false;
    for(int i=1;i<=11;i++){
        cout<<"? "<<n<<endl;
        char ret;
        cin>>ret;
        if(ret=='N'){
            flag=true;
            len=i-1;
            break;
        }
        n*=10;
    }
    if(!flag){
        int n=2;
        for(int i=1;i<=11;i++){
            cout<<"? "<<n<<endl;
            char ret;
            cin>>ret;
            if(ret=='Y'){
                len=i;
                break;
            }
            n*=10;
        }
    }
    int ok=1,ng=1;
    rep(_,len-1)ng*=10;
    ok=ng*10;
    ng--;
    while(ok-ng>1){
        int mid=(ok+ng)/2;
        cout<<"? "<<10*mid<<endl;
        char ret;
        cin>>ret;
        if(ret=='Y'){
            ok=mid;
        }
        else{
            ng=mid;
        }
    }
    cout<<"! "<<ok<<endl;
    return 0;
}