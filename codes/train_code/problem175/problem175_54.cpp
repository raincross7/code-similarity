#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(),a.end()
#define maxs(x,y) (x = max(x,y))
#define mins(x,y) (x = min(x,y))
#define limit(x,l,r) max(l,min(x,r))
#define lims(x,l,r) (x = max(l,min(x,r)))
#define isin(x,l,r) ((l) <= (x) && (x) < (r))
#define pb push_back
#define sz(x) (int)(x).size()
#define pcnt __builtin_popcountll
#define uni(x) x.erase(unique(rng(x)),x.end())
#define snuke srand((unsigned)clock()+(unsigned)time(NULL));
#define show(x) cout<<#x<<" = "<<x<<endl;
#define PQ(T) priority_queue<T,v(T),greater<T> >
#define bn(x) ((1<<x)-1)
#define dup(x,y) (((x)+(y)-1)/(y))
#define newline puts("")
#define v(T) vector<T>
#define vv(T) v(v(T))
using namespace std;
typedef long long int ll;
typedef unsigned uint;
typedef unsigned long long ull;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
inline int in() { int x; scanf("%d",&x); return x;}
template<typename T>inline istream& operator>>(istream&i,v(T)&v)
{rep(j,sz(v))i>>v[j];return i;}
template<typename T>string join(const v(T)&v)
{stringstream s;rep(i,sz(v))s<<' '<<v[i];return s.str().substr(1);}
template<typename T>inline ostream& operator<<(ostream&o,const v(T)&v)
{if(sz(v))o<<join(v);return o;}
template<typename T1,typename T2>inline istream& operator>>(istream&i,pair<T1,T2>&v)
{return i>>v.fi>>v.se;}
template<typename T1,typename T2>inline ostream& operator<<(ostream&o,const pair<T1,T2>&v)
{return o<<v.fi<<","<<v.se;}
template<typename T>inline ll suma(const v(T)& a) { ll res(0); for (auto&& x : a) res += x; return res;}
const double eps = 1e-10;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
#define dame { puts("-1"); return 0;}
#define yn {puts("Yes");}else{puts("No");}
const int MX = 200005;

    // 整数スキャン（複数）
    /*
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int z;
    scanf("%d",&z);

    // n個の整数のスキャン
    /*
    ll a[n] = {};
    rep(i,n){
        scanf("%lld",&a[i]);
    }
    */

    // 文字列スキャン
    /*
    string s;
    cin >> s;
    */

    // n個の文字列スキャン
    /*
    vector<string> slist;
    rep(i,n){
        string s;
        cin >> s;
        slist.push_back(s);
    }
    */

int main() {
    int n;
    int zero = 0;
    scanf("%d",&n);
    ll a[n] = {};
    ll b[n] = {};
    ll sum = 0;
    rep(i,n){
        scanf("%lld%lld",&a[i],&b[i]);
        sum += a[i];
    }
    //sort(a,a+n);
    //sort(b,b+n);
    int flag = 0;
    rep(i,n){
        if(a[i]!=b[i]){
            flag = 1;
            break;
        }
    }
    if(flag==0){
        cout << zero << endl;
        return 0;
    }

    ll ans = 0;

    int ca = 0;
    int cb = 0;
    /*
    while(true){
        if(a[ca]==b[cb]){
            //ans += a[ca];
            a[ca]=0;
            b[cb]=0;
            ca++;
            cb++;
        }else{
            if(ca==n-1){
                cb++;
            }else if(cb==n-1){
                ca++;
            }else if(a[ca]<b[cb]){
                ca++;
            }else{
                cb++;
            }
        }
        if(ca==n-1&&cb==n-1)break;
    }
    */
    
    //sort(a,a+n);
    //sort(b,b+n);
    ll mi = 1000000000000;
    drep(i,n){
        if(a[i]>b[i]){
            mi = min(mi,b[i]);
        }
    }
    
    
    cout << sum - mi << endl;
    return 0;
}
 
 
