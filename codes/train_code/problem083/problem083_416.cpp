#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Fi first
#define Se second
#define Pb push_back
#define vi vector<int>
#define vp vector<pair<int,int>>
#define vvi vector<vector<int>>
#define vvp vector<vector<pair<int,int>>>

const int INF = 1e9;
const int MOD = 1e9+7;
using Graph = vector<vector<ll>>; //Caution!! Segmentation Fault!! Don't forget to add +1!

#define all(v) v.begin(),v.end()
#define output_s(a) printf("%s\n",(a).c_str())

#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define Rep(i,n,m) for(int i=(int)(n);i<(int)(m);i++)
#define RepS(i,n,m) for(int i=(int)(n);i<=(int)(m);i++)
#define RRepS(i,n,m) for(int i=(int)(n);i>=(int)(m);i--)
#define RepA(x) for(auto &item:(x))

void CINT(){}
template <class Head,class... Tail>
void CINT(Head&& head,Tail&&... tail){
    cin>>head;
    CINT(move(tail)...);
}    
#define CIN(...) int __VA_ARGS__;CINT(__VA_ARGS__)
#define LCIN(...) ll __VA_ARGS__;CINT(__VA_ARGS__)
#define SCIN(...) string __VA_ARGS__;CINT(__VA_ARGS__)

template<typename TypeInt> //最大公約数
TypeInt GCD(TypeInt a,TypeInt b){
    if(a%b==0) return b;
    else return GCD(b,a%b);
}
template<typename TypeInt> //最小公倍数
TypeInt LCM(TypeInt a,TypeInt b){
    return a*b/GCD(a,b);
}

int IN_int(){
    int x;
    scanf("%d",&x);
    return x;
}

//library----------------------------------------------

//const int dx[4]={1,0,-1,0};
//const int dy[4]={0,1,0,-1};
const int dx[8]={1,0,-1,0,1,-1,-1,1};
const int dy[8]={0,1,0,-1,1,1,-1,-1};

const int NMAX = 200;
bool flag;

bool comp(int x,int y){
    return abs(0-x)<abs(0-y);
}


signed main(){
    CIN(N,M,R);
    Graph G(N,vector<ll>(N,INF));
    vi r(R);
    rep(i,R)cin>>r[i];
    rep(i,N)G[i][i]=0;
    rep(i,M){
        int from,to,dis;
        cin>>from>>to>>dis;
        G[from-1][to-1]=dis;
        G[to-1][from-1]=dis;
    }
    ll ans=INF;
    sort(all(r));
    rep(i,N){
        rep(j,N){
            rep(k,N){
                G[j][k]=min(G[j][k],G[j][i]+G[i][k]);
            }
        }
    }
    do
    {
        ll cls=0;
        rep(i,R-1){
            cls+=G[r[i]-1][r[i+1]-1];
        }
        ans=min(ans,cls);
    } while (next_permutation(all(r)));
    printf("%lld\n",ans);

    return 0;
}