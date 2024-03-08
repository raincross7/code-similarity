#include<bits/stdc++.h>
using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

#define IOS             ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define read            freopen("in.txt","r",stdin)
#define write           freopen("out.txt","w",stdout)
#define loop(i,a,b)     for (ll i = a; i <= b; i++)
#define rloop(i,a,b)    for (ll i = a; i >= b; i--)
#define ms(a,x)         memset(a,x,sizeof a)
#define ll              long long int
#define ff              first
#define ss              second
#define all(a)          a.begin(),a.end()
#define rall(a)         a.rbegin(),a.rend()
#define pb              push_back
#define nl              cout<<"\n"
#define gcd(a,b)        __gcd((a),(b))
#define lcm(a,b)        ((a)*(b))/(gcd(a,b))
#define sq(a)           (a)*(a)
#define sz(a)           a.size()
#define mod             1000000007
#define PI              2*acos(0.0)


int main()
{
    IOS
    int T=1;
    //cin>>T;
    while(T--)
    {
        ll n,k;
        cin>>n>>k;
        ll r,s,p;
        cin>>r>>s>>p;
        string a,b="";
        cin>>a;
        loop(i,0,n-1)
        {
            if(a[i]=='s') b+='r';
            else if(a[i]=='p') b+='s';
            else b+='p';
        }
        ll ans=0;
        loop(i,0,k-1)
        {
            if(b[i]=='s') ans+=s;
            else if(b[i]=='r') ans+=r;
            else ans+=p;
        }
        loop(i,k,n-1)
        {
            if( b[i]!=b[i-k])
            {
                if(b[i]=='s') ans+=s;
                else if(b[i]=='r') ans+=r;
                else ans+=p;
            }
            else b[i]='a';
        }
        cout<<ans;
    }
    return 0;
}
