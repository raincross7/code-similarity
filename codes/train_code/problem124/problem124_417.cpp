//file_name:ABC76_D.cpp
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

    // int scan
    /*
    int x;
    scanf("%d",&x);
    int y;
    scanf("%d",&y);
    int z;
    scanf("%d",&z);

    // matrix scan
    /*
    ll a[n] = {};
    rep(i,n){
        scanf("%lld",&a[i]);
    }
    */

    // string scan
    /*
    string s;
    cin >> s;
    */


int main() {
    int n;
    scanf("%d",&n);
    int t[n+1];
    double v[n+1];
    int tsum[n+1] = {};
    
    srep(i,1,n+1){
        cin >> t[i]; 
        tsum[i] = tsum[i-1] + t[i];
    }
    srep(i,1,n+1){
        cin >> v[i];
    }
    double vlim[tsum[n]+1];
    vlim[tsum[n]]=0;
    double vlim2[tsum[n]];
    int tsumn = tsum[n];
    rep(i,tsumn){
        double hun = 100;
        double i5 = i+0.5;
        double ii5 = tsum[n]-i-0.5;
        vlim[i] = min(hun,min((double)i,(double)(tsum[n]-i)));
        vlim2[i] = min(hun,min(i5,ii5));
    }
    srep(i,1,n+1){
        srep(j,0,tsum[i-1]){
            double jj = j;
            vlim[j] = min(vlim[j],v[i]+tsum[i-1]-jj);
        }
        srep(j,tsum[i-1],tsum[i]){
            vlim[j] = min(vlim[j],v[i]);
            vlim2[j] = min(vlim2[j],v[i]);
        }
        srep(j,tsum[i],tsum[n]){
            double jj = j;
            vlim[j] = min(vlim[j],v[i]+jj-tsum[i]);
        }
    }
    double ans = 0;
    //cout << tsum[n];
    rep(i,tsum[n]){
        //cout << i << ' ' << vlim[i] << ' ' << vlim2[i] << endl;
        double ansss = (vlim[i]+vlim[i+1])/2.0;
        ans += ansss;
        if(vlim[i]==vlim[i+1]){
            if(vlim[i]<vlim2[i]){
                double ansss = 0.25;
                ans+=ansss;
                //cout << i << vlim2[i] << endl;
            }
        }
    }
    
    

    
    cout << fixed;
    cout << ans << endl;
    return 0;
}

