#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef unsigned long long int ulli;
typedef pair<int,int> pii;
typedef priority_queue< int, vector< int >, greater< int > >  minHeap;

#define ones(x) __builtin_popcount(x)
#define onesl(x) __builtin_popcountl(x)
#define onesll(x) __builtin_popcountll(x)

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define mt make_tuple
#define scn(n) scanf("%d",&n)
#define scnll(n) scanf("%lld",&n)
#define scn2(n,m) scanf("%d%d",&n,&m)
#define scn3(n,m,w) scanf("%d%d%d",&n,&m,&w)
#define scn2ll(n,m) scanf("%lld%lld",&n,&m)
#define atoz(v) v.begin(),v.end()
#define ratoz(v) v.rbegin(),v.rend()
#define Fill(a,v) memset(a,v,sizeof(a))
#define fi first
#define se second
#define inf 1e9
#define pi acos(-1.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define mod 1000000007
#define FastIO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define bug(x) cerr << __LINE__ << " says: " << #x << " = " << (x) << "\n"

int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
int reset(int N,int pos)
{
    return N = N & ~(1<<pos);
}
bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}


inline int addmod(int x,int y)
{
    return (x%mod + y%mod)%mod;
}
inline int submod(int x,int y)
{
    return (x%mod - y%mod + mod)%mod;
}
inline int mulmod(int x,int y)
{
    return (x%mod *1LL* y%mod)%mod;
}
inline int nextSubMask(int i, int mask)
{
    return (i-1)&mask;   /// returns next  submask
}

template<typename T>
void we_r_done(T mssg)
{
    cout<<mssg;
    exit(0);
}

bool OK(vector<int>moves , int idx){
    bitset<32006>dp;
    dp[16002+idx] = 1;

    for(int m : moves){
        dp = (dp<<m) | (dp>>m);
    }
    return dp[16002];
}

int main()
{
    ///freopen("output.txt","w",stdout);
    ///freopen("input.txt","r",stdin);

    ///FastIO;


    string s;
    cin>>s;
    int x,y;
    cin>>x>>y;

    int turn = 0 , f = 0;
    vector<int>movex, movey;

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'F') f++;
        if(s[i] == 'T' || i == s.size()-1){
            if(turn){
                movey.pb(f);
            }
            else{
                if(movex.size() == 0 && movey.size() == 0) x -= f;
                else movex.pb(f);
            }
            f = 0;
            turn ^= 1;
        }
    }

    if(OK(movex , x) && OK(movey,y)) cout<<"Yes";
    else cout<<"No";

    return 0;

}

///sin and cos expect input in radians not degrees. so use , sin(degrees * pi / 180)
///using bs = bitset<MX>; // how many distinct number can be form?
///sort(atoz(v), [](const data x, const data y){return (x.a==y.a?x.b>y.b : x.a<y.a);});
