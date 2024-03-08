    /**   Created by: Marcos Portales
          Codeforces User: marcosportales
          Country: Cuba
                         **/
#include<bits/stdc++.h>
using namespace std;
/// Macros:
#define int long long
#define f first
#define s second
#define db(x) cerr << #x << ": " << (x) << '\n';
#define pb push_back
#define lb lower_bound
#define up upper_bound
#define all(x) x.begin() , x.end()
#define rall(x) x.rbegin() , x.rend()
#define enl '\n'
#define vi vector<int>
#define sz size
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep2(i,n) for(int i=1;i<=(n);i++)
typedef pair<int,int> ii;
typedef long double ld;
typedef unsigned long long ull;
/// Constraints:
const int maxn = 2*1e5+1;
const int mod = 1000000009;
const ld eps = 1e-9;
const int inf = ((1ll<<31ll)-1ll);
const int INF = 10000000000000000ll;
const ld pi = acos(-1);
/// Prime Numbers:
// 2, 173, 179, 181, 197, 311, 331, 737, 1009, 2011, 2027, 3079, 4001, 10037, 10079, 20011, 20089;
// 100003, 100019, 100043, 200003, 200017, 1000003, 1000033, 1000037, 1000081;
// 2000003, 2000029, 2000039, 1000000007, 1000000021, 2000000099;
/// Functions:
#define lg2(x) 31 - __builtin_clz(x)
#define lgx(x,b) ( log(x) / log(b) )
/// Red-Black Tree Template ---------------------------------
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//typedef tree < long long ,  null_type ,  less<long long> ,  rb_tree_tag ,  tree_order_statistics_node_update > ordered_set;
/// Quick Pow------------------------------------------------
int qpow(int b,int e){
    if( !e ) return 1;
    if( e & 1 ) return qpow(b,e-1) * b;
    int pwur = qpow(b,e>>1);
    return pwur * pwur;
}
int modinv(int x){
    return qpow(x,mod-2);
}
/// Criba de Eratostenes ------------------------------------
const int pr=10000;
map<int,int>isp;
void criba(){
    for(int i=0;i<=pr;i++)isp[i]=i;
    isp[0]=isp[1]=-1;
    for(int i=2;i*i<=pr;i++){
        if(isp[i]==i){
        for(int j=i+i;j<=pr;j+=i)
            isp[j]=i;
        }
    }
}
/// My Code -------------------------------------------------
/*
int dx[]={1,-1,0,0},dy[]={0,0,1,-1};
bool vis[55][55];
void dfs(int x,int y){
    int nx,ny;
    vis[x][y]=true;
    rep(i,4){
        nx=x+dx[i];
        ny=y+dy[i];
        if(!vis[nx][ny]&&v[nx][ny]=='#')dfs(nx,ny);
    }
}
*/
int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cout.setf(ios::fixed); cout.precision(0);
    srand(time(NULL));

    ///freopen("a.in","r",stdin);
    ///freopen("a.out","w",stdout);
    ///criba();

    int n,m;
    char v[55][55];
    cin>>n>>m;
    rep(i,n)rep(j,m)cin>>v[i][j];

    bool fl=1;
    rep(i,n-1)rep(j,m-1){
        if(v[i][j]=='#'){
            if(v[i+1][j]=='.'&&v[i-1][j]=='.'&&v[i][j+1]=='.'&&v[i][j-1]=='.')fl=0;
        }
    }

    cout<<((fl)?"Yes":"No")<<enl;

    return 0;
}