// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define REP(i, n) for (int i = 0; i < n; ++i)
#define range(i,a,b) ((a)<=(i) && (i)<(b))
#define debug(x) cout << #x << ' ' << '=' << ' ' << (x) << endl;
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
typedef long long ll;
typedef pair<ll, ll> P;
typedef tuple<ll, ll, ll> T;
typedef vector<ll> vec;
typedef vector<P> pvec;
typedef vector<vector<ll>> vvec;
typedef vector<vector<P>> pvvec;
typedef priority_queue<ll> PQI;
typedef priority_queue<P> PQP;
typedef priority_queue<ll,vector<ll>,greater<ll>> PQIG;
typedef priority_queue<P,vector<P>,greater<P>> PQPG;
const vector<int> dx = {0, -1, 0, 1, 1, 1, -1, -1};
const vector<int> dy = {1, 0, -1, 0, 1, -1, 1, -1};
const int MOD = (1000000007);
// const int MOD = (998244353);
// const int INF = (1 << 30);
const int INF = (1LL << 60);
const double EPS = (1 >> 30);
template<class T> inline bool chmin(T& a, T b) {if (a > b) {a = b; return 1;} return 0;}
template<class T> inline bool chmax(T& a, T b) {if (a < b) {a = b; return 1;} return 0;}
template< typename T1, typename T2 > istream &operator>>(istream &is, pair< T1, T2 > &p) { is >> p.first >> p.second; return is; }
template< typename T > istream &operator>>(istream &is, vector< T > &v) { for(T &in : v) is >> in; return is; }



signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(15);
    //---------------------------------------------
    
    int n;
    cin>>n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    vec ind(n+1);
    rep(i,n) ind[a[i]]=i;
    multiset<int> se;
    se.insert(-1);se.insert(n);
    se.insert(-1);se.insert(n);
    se.insert(ind[n]);
    ll ans=0;
    
    for(int d=n-1;d>=1;d--){ // nは選ばれないので省略
        int doko=ind[d];
        auto it=se.lower_bound(doko);
        int r=*it;
        it++;
        int rr=*it;
        it--;it--;
        int l=*it;
        it--;
        int ll=*it;
        // cout<<ll<<" "<<l<<" "<<r<<" "<<rr<<endl;
        int memo=0;
        if(r!=n&&l!=-1){
            memo+=d*((l-ll)*(r-doko)+(rr-r)*(doko-l));
            //debug((l-ll)*(r-doko)+(rr-r)*(doko-l));
        }
        else if(r==n){
            memo+=d*(l-ll)*(n-doko);
        }
        else if(l==-1){
            memo+=d*(doko+1)*(rr-r);
        }
        se.insert(doko);
        ans+=memo;
        // cout<<memo<<endl;
    }
    cout<<ans<<endl;

}