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
const int maxn = 3*1e5+5;
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

/// My Code -------------------------------------------------

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cout.setf(ios::fixed); cout.precision(0);
    srand(time(NULL));

    ///freopen("a.in","r",stdin);
    ///freopen("a.out","w",stdout);
    int n;
    cin>>n;
    vi dp(100010);
    rep(i,100010){
        dp[i]=inf;
    }
    dp[0]=0;
    rep(i,100010){
        dp[i+1]=min(dp[i+1],dp[i]+1);
        for(int j=1;j<100;j++){
            if(i+qpow(6,j)>100000)break;
            int x=qpow(6,j);
            dp[i+x]=min(dp[i+x],dp[i]+1);
        }
        for(int j=1;j<100;j++){
            if(i+qpow(9,j)>100000)break;
            int x=qpow(9,j);
            dp[i+x]=min(dp[i+x],dp[i]+1);
        }
    }
    cout<<dp[n]<<enl;


    return 0;
}
