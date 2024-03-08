#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define F               first
#define S               second
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18 + 1
#define endl            '\n'
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define forI(i,a,n)     for(int i=a;i<=n;i++)
#define forD(i,a,n)     for(int i=n;i>=a;i--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
void init(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
}

int dp[100005][2];
vi Tree[100005];

int compute(int n, bool c, int p){
    if(dp[n][c] != -1)  return dp[n][c];

    int ans = 0, w1 = 1;
    for(int child : Tree[n]){
        if(child != p)
            w1 = (w1 * compute(child, 0, n))%mod;
    }
    ans += w1;
    if(!c){
        int w2 = 1;
        for(int child : Tree[n]){
            if(child != p)
                w2 = (w2 * compute(child, 1, n))%mod;
        }
        ans = (ans + w2)%mod;
    }

    return dp[n][c] = ans;
}

void solve(){
    int n, x, y;  cin>>n;
    forI(i, 1, n-1){
        cin>>x>>y;
        Tree[x].pb(y);
        Tree[y].pb(x);
    }
    memset(dp, -1, sizeof dp);
    cout<<compute(1, 0, -1)<<endl;
}   

int32_t main(){
    init();
    // w(t) 
    solve();
    return 0;
}