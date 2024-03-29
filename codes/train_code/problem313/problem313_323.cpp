#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep1(i,n) for(int i=1;i<=(int)n;i++)
#define rep2(i,j,n) for(int j=i;j<n;j++)
#define rep3(i,j,n) for(int j=i;j<=n;j++)
#define rrep(i,n) for(int i=n-1;i>=0;i--)
#define sp(n) cout << fixed << setprecision(n)
typedef long long ll;
using namespace std;
using namespace std;
const int MAX_N = 100002;
int par[MAX_N];//親
int pank[MAX_N];//木の深さ

//n要素で初期化
void init(int n){
    for(int i=0;i<n;i++){
        par[i]=i;
        pank[i]=0;
    }
}

//木の根を求める
int find(int x){
    if(par[x]==x){
        return x;
    }else{
        return par[x]=find(par[x]);
    }
}

//xとyの属する集合を併合
void unite(int x,int y){
    x = find(x);
    y = find(y);
    if(x==y)return;
    if(pank[x]<pank[y]){
        par[x]=y;
    }else{
        par[y]=x;
        if(pank[x]==pank[y])pank[x]++;
    }
}

//xとyが同じ集合に属するか否か
bool same(int x,int y){
    return find(x)==find(y);
}

int main(void){
    int n,m;cin>>n>>m;
    init(n);
    map<int,int> mp;
    rep(i,n){
        int x;cin>>x;x--;
        mp[i]=x;
    }
    rep(i,m){
        int a,b;cin>>a>>b;a--;b--;
        unite(a,b);
    }
    vector<bool> sol(n,false);
    int res=0;
    rep(i,n){
        int x=i,y=mp[i];
        if(same(x,y)){
            if(!sol[x]){
                sol[x]=true;
                res++;
                //cout<<1<<endl;
            }
        }
    }
    cout<<res<<endl;
}