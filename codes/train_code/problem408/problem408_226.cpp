/*
  Compete against Yourself.
  Author - Aryan Choudhary (@aryanc403)
*/

#pragma GCC optimize ("Ofast")
#pragma GCC target ("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize ("-ffloat-store")

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define fo(i,n)   for(i=0;i<(n);++i)
#define repA(i,j,n)   for(i=(j);i<=(n);++i)
#define repD(i,j,n)   for(i=(j);i>=(n);--i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define endl "\n"

typedef long long int lli;
typedef long double mytype;
typedef pair<lli,lli> ii;
typedef vector<ii> vii;
typedef vector<lli> vi;

clock_t time_p=clock();
void aryanc403()
{
#ifdef ARYANC403
    time_p=clock()-time_p;
    cerr<<"Time Taken : "<<(float)(time_p)/CLOCKS_PER_SEC<<"\n";
#endif
}

#ifdef ARYANC403
#include "/home/priank/codes/PastCodes/header.h"
#else
    #define dbg(args...)
#endif

const lli INF = 0xFFFFFFFFFFFFFFFL;

lli seed;
mt19937 rng(seed=chrono::steady_clock::now().time_since_epoch().count());
inline lli rnd(lli l=0,lli r=INF)
{return uniform_int_distribution<lli>(l,r)(rng);}

class CMP
{public:
bool operator()(ii a , ii b) //For min priority_queue .
{    return ! ( a.X < b.X || ( a.X==b.X && a.Y <= b.Y ));   }};

void add( map<lli,lli> &m, lli x,lli cnt=1)
{
    auto jt=m.find(x);
    if(jt==m.end())         m.insert({x,cnt});
    else                    jt->Y+=cnt;
}

void del( map<lli,lli> &m, lli x,lli cnt=1)
{
    auto jt=m.find(x);
    if(jt->Y<=cnt)            m.erase(jt);
    else                      jt->Y-=cnt;
}

bool cmp(const ii &a,const ii &b)
{
    return a.X<b.X||(a.X==b.X&&a.Y<b.Y);
}

const lli mod = 1000000007L;
// const lli maxN = 1000000007L;

    lli T,n,i,j,k,in,cnt,l,r,u,v,x,y;
    lli m;
    string s;
    vi a;
    //priority_queue < ii , vector < ii > , CMP > pq;// min priority_queue .

void prt(bool fl=false)
{
    cout<<(fl?"YES":"NO")<<endl;
    exit(0);
}

int main(void) {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    // freopen("txt.in", "r", stdin);
    // freopen("txt.out", "w", stdout);
// cout<<std::fixed<<std::setprecision(35);
// cin>>T;while(T--)
{

    cin>>n;
    a.clear();a.reserve(n+2);
    a.pb(0);
    lli cnt=0;
    fo(i,n)
    {
        cin>>in;
        a.pb(in);
        cnt+=in;
    }

    if(n==1)
        prt(true);

    a.pb(a[1]);
    a[0]=a[n];

    u=n*(n+1)/2;
    dbg(cnt,u);
    if(cnt%u)
        prt();
    cnt/=u;

    // if(n<3)
    // {
    //     if(n==1)
    //         prt(true);
    //     if((a[1]+a[2])%3)
    //         prt();
    //     lli x=(a[1]+a[2])/3;
    //     lli y=a[1]-a[2];
    //     if((x+y)%2)
    //         prt();
    //     tie(x,y)=mp((x-y)/2,(x+y)/2);
    //     if(x<0||y<0)
    //         prt();
    //     if(a[1]!=x+2*y)
    //         prt();
    //     if(a[2]!=2*x+y)
    //         prt();
    //     prt(true);
    // }

    u=0;
    repA(i,1,n)
    {
        lli nx=-a[i]+a[i-1]+cnt;
        dbg(i,nx,nx/n);
        if(nx<0||nx%n)
            prt();
        u+=nx/n;
    }
    dbg(u,cnt);
    prt(u==cnt);
}   aryanc403();
    return 0;
}
