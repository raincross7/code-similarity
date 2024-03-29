#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define int long long
#define ull unsigned long long
#define ld long double
#define rep(a) rep1(i,a)
#define rep1(i,a) rep2(i,0,a)
#define rep2(i,b,a) for(int i=(b); i<((int)(a)); i++)
#define rep3(i,b,a) for(int i=(b); i>=((int)(a)); i--)
#define all(a) a.begin(),a.end()
#define pii pair<int,int>
#define pb push_back
#define mp make_pair
//#define inf 2000000000
#define inf 8000000000000000000
#define eps 1e-9
#define sz(a) ((int)a.size())
#define pow2(x) (1ll<<(x))
#define ceiling(a,b) (((a)+(b)-1)/(b))
#define print0(a) cout << (a) << ' '
#define print1(a) cout << (a) << '\n'
#define print2(a,b) cout << (a) << ' ',print1(b)
#define print3(a,b,c) cout << (a) << ' ',print2(b,c)
#define print4(a,b,c,d) cout << (a) << ' ',print3(b,c,d)
#define ykh mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

using namespace std;
using namespace __gnu_pbds;

const int Mod=1000000007,Mod2=998244353;
const int MOD=Mod2;
const int maxn=1000005;
//i_am_noob
int n,a[maxn],lpd[maxn],x,y;
bool flag=false;
set<int> st;

signed main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    cin >> n;
    rep(maxn) lpd[i]=-1;
    rep2(i,2,maxn){
        if(lpd[i]==-1){
            lpd[i]=i;
            for(int j=i*i; j<maxn; j+=i) if(lpd[j]==-1) lpd[j]=i;
        }
    }
    rep(n) cin >> a[i];
    rep(n){
        x=a[i];
        while(x>1){
            y=lpd[x];
            if(st.count(y)){
                flag=true;
                break;
            }
            st.insert(y);
            while(x%y==0) x/=y;
        }
        if(flag) break;
    }
    if(!flag){
        print1("pairwise coprime");
        return 0;
    }
    x=0;
    rep(n) x=__gcd(x,a[i]);
    if(x==1){
        print1("setwise coprime");
        return 0;
    }
    print1("not coprime");
    return 0;
}
