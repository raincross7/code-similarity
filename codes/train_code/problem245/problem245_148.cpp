#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define rrep(i,n) for(int i = 1; i <= (n); ++i)
#define drep(i,n) for(int i = (n)-1; i >= 0; --i)
#define srep(i,s,t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(),a.end()
#define rrng(a) a.rbegin(),a.rend()
#define isin(x,l,r) ((l) <= (x) && (x) < (r))  // xが範囲内か
#define sort_u(x) sort((x).begin(),(x).end())
#define sort_d(x) sort((x).begin(),(x).end(), greater<int>())
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()  // 配列のサイズ
#define pcnt __builtin_popcountll
#define uni(x) x.erase(unique(rng(x)),x.end())
#define snuke srand((unsigned)clock()+(unsigned)time(NULL));
#define show(x) cerr<<#x<<" = "<<x<<endl;  // 確認したいとき
#define PQ(T) priority_queue<T,v(T),greater<T> >
#define bn(x) ((1<<x)-1)
#define dup(x,y) (((x)+(y)-1)/(y))  // 切り上げたいとき
#define newline puts("")
#define v(T) vector<T>  // Tはどんな型でもいい
#define vv(T) v(v(T))
using namespace std;
typedef long long int ll;
typedef unsigned uint;
typedef unsigned long long ull;
typedef pair<int,int> P;
typedef tuple<int,int,int> T;
typedef vector<int> vi;  // ******
typedef vector<vi> vvi;
typedef vector<ll> vl;  // ******
typedef vector<P> vp;
typedef vector<T> vt;
int getInt(){int x;scanf("%d",&x);return x;}
template<typename T>istream& operator>>(istream&i,v(T)&v){rep(j,sz(v))i>>v[j];return i;}  // vi a(n); cin>>a;
template<typename T>string join(const v(T)&v){stringstream s;rep(i,sz(v))s<<' '<<v[i];return s.str().substr(1);}
template<typename T>ostream& operator<<(ostream&o,const v(T)&v){if(sz(v))o<<join(v);return o;}  // cout<<a;  aの中身全部出す
template<typename T1,typename T2>istream& operator>>(istream&i,pair<T1,T2>&v){return i>>v.fi>>v.se;}
template<typename T1,typename T2>ostream& operator<<(ostream&o,const pair<T1,T2>&v){return o<<v.fi<<","<<v.se;}
template<typename T>bool mins(T& x,const T&y){if(x>y){x=y;return true;}else return false;}
template<typename T>bool maxs(T& x,const T&y){if(x<y){x=y;return true;}else return false;}
template<typename T>ll suma(const v(T)&a){ll res(0);for(auto&&x:a)res+=x;return res;}
const double eps = 1e-10;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
#define dame1 { puts("-1"); return 0;}
#define dame0 { puts("0"); return 0;}
#define yn {puts("Yes");}else{puts("No");}
#define out cout << ans << endl;
//mins(ans,now);  ansに最小値が入る
//if(max(ans,now)) ansが小さければ更新して実行。cnt++とか。
//ll sum = suma(a);

int main() {
    int n, k; cin >> n >> k;
    vi p(n),c(n); cin>>p>>c;
    rep(i,n) p[i]--;

    ll ans = -1e18;

    rep(si,n){
        vi s;
        int x = si;
        ll tot = 0;
        while(1){
            x = p[x];
            tot += c[x];
            s.pb(c[x]);
            if(x==si) break;
        }
        ll t = 0;
        int l = s.size();
        rep(i, l){
            t += s[i];
            if(i+1>k) break;
            ll now = t;
            if(tot > 0){
                ll e = (k-(i+1))/l;
                now += tot*e;
            }
            maxs(ans,now);
        }
    }

    // rep(i,n){
    //     ll sum = 0;
    //     int now = p[i];
    //     rep(j,k){
    //         sum += c[p[now]];
    //         maxs(ans,sum);
    //         now = p[now];
    //     }        
    // }
    out;
}

/*
g++ a.cpp
./a.out

oj d
oj t

debug:ctrl+shift+B+./problem.exe
problem.in+f5

*/
