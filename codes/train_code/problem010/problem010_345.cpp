#include <bits/stdc++.h>
#define pb push_back
#define Int long long
using namespace std;

const int MAXN=500005;
const int NAX=1005;
const long long  MOD=(long long)(998244353);

Int N,M,K;
Int X,Y,Z;
Int H,W;

Int perform(Int x){
    return (x*(x+1))/2LL;
}
vector<Int> A;
vector<int> adj[MAXN];
using D=long double;

bool inRange(Int a,Int b){
    return a*b<=0;
}

long long C[NAX][NAX];
const D pi=3.14159265359;


long long ModExpo(long long x,unsigned long long y,long long M){
    Int ans=1;
    ans=(long long)ans;
    
    while(y>0){
        if(y&1) ans=((ans%M)*(x%M))%M;
        y>>=1LL;
        x=((x%M)*(x%M))%M;
    }
    return ans%M;
}
long long fac[MAXN];
void fillFac(){
    fac[0]=1;
    for(int i=1;i<MAXN;++i){
        fac[i]=((fac[i-1]%MOD)*(i%MOD))%MOD;
    }
}

long long ModInv(long long x){
    return ModExpo(x,MOD-2,MOD);
}

long long FermatLast(long long n,long long r){
    if(r>n) return 0;
    if(!r) return 1;
    return (fac[n] * ModInv(fac[r]) % MOD * ModInv(fac[n - r]) % MOD) % MOD;
}

Int performMod(Int x){
    Int y=((x%MOD)*((x+1)%MOD))%MOD;
    return (y*ModInv(2))%MOD;
}

Int madd(Int x,Int y){
    return (x+y)%MOD;
}

Int mmul(Int x,Int y){
    return ((x%MOD)*(y%MOD))%MOD;
}


bool isMSB(int bit,Int x){
    return (int)(floor(log2l(x)))==bit;
}
bool VIS[MAXN];
void dfs(int u){
    VIS[u]=true;
        for(auto &v:adj[u]){
            if(!VIS[v]){
                dfs(v);
            }
        }
}
int main()
{
    cin>>N;
    A.resize(N);
    
            for(auto &x:A) cin>>x;
            
            map<int,int> mp;
            for(auto x:A) ++mp[x];
            
            vector<Int> allowed;
            vector<Int> squares;
            for(auto &itr:mp){
                if(itr.second>1) allowed.pb(itr.first);
                if(itr.second>3){
                    squares.pb(itr.first);
                }
            }
            if(allowed.size()<2){
                cout<<"0\n";
                exit(0);
            }
            Int best=0;
            if(!squares.empty()){
            
                sort(squares.rbegin(),squares.rend());
                for(auto x:squares){
                    best=max(best,x*x);
                }
                
            }
            
            
            sort(allowed.rbegin(),allowed.rend());
            Int ans=allowed.front();
            allowed.erase(allowed.begin());
            ans*=allowed.front();
            best=max(best,ans);
            cout<<best<<"\n";
            
}
