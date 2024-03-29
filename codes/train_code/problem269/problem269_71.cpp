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

inline int addmod(lli x,lli y)
{
    return (x%mod + y%mod)%mod;
}
inline int submod(lli x,lli y)
{
    return (x%mod - y%mod + mod)%mod;
}
inline int mulmod(lli x,lli y)
{
    return (x%mod * y%mod)%mod;
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


int main()
{
    ///freopen("output.txt","w",stdout);
    //freopen("input.txt","r",stdin);
    FastIO;

    int n,m;
    while(cin>>n>>m)
    {
        string s[n];
        queue<pii>Q;

        for(int i=0; i<n; i++)
        {
            cin>>s[i];

            for(int j=0; j<m; j++)
            {
                if(s[i][j] == '#')
                    Q.push(pii(i,j));
            }
        }

        int cnt = 0 , blacks = Q.size();
        int dx[5] = {1,-1,0,0};
        int dy[5] = {0,0,1,-1};


        while(Q.size()>0 && blacks<(n*m))
        {
            int now = Q.size();
            cnt++;
            while(now--)
            {
                pii p = Q.front();
                Q.pop();

                for(int i=0; i<4; i++)
                {
                    int xx = p.fi + dx[i];
                    int yy = p.se + dy[i];
                    if(xx<0 || yy<0 || xx>=n || yy>=m)
                        continue;

                    if(s[xx][yy] == '#')
                        continue;
                    Q.push(pii(xx,yy));
                    s[xx][yy] = '#';
                    blacks++;
                }
            }
        }
        cout<<cnt<<endl;
    }



    return 0;
}

///sin and cos expect input in radians not degrees. so use , sin(degrees * pi / 180)
///using bs = bitset<MX>; // how many distinct number can be form?
///sort(atoz(v), [](const data x, const data y){return (x.a==y.a?x.b>y.b : x.a<y.a);});
