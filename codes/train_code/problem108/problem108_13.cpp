#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define fore(i, l, r) for(int i = int(l); i < int(r); i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(a) int((a).size())
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef pair<int, int> pii;
const int mod = 1e9 + 7;
template<class T, class U> inline void add_self(T &a, U b){a += b;if (a >= mod) a -= mod;if (a < 0) a += mod;}
template<class T, class U> inline void min_self(T &x, U y) { if (y < x) x = y; }
template<class T, class U> inline void max_self(T &x, U y) { if (y > x) x = y; }

#define _deb(x) cout<<x;
void _print() {cerr << "]\n";} template <typename T, typename... V>void _print(T t, V... v) {_deb(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
template <class T, class U> void print_m(const map<T,U> &m, int w=3){if(m.empty()){cout<<"Empty"<<endl; return;}for(auto x: m)cout<<"("<<x.first<<": "<<x.second<<"),"<<endl;cout<<endl;}
template<class T, class U>void debp(const pair<T, U> &pr, bool end_line=1){cout<<"{"<<pr.first<<" "<<pr.second<<"}"; cout<<(end_line ? "\n" : ", ");}
template <class T> void print_vp(const T &vp, int sep_line=0){if(vp.empty()){cout<<"Empty"<<endl; return;}if(!sep_line) cout<<"{ ";for(auto x: vp) debp(x,sep_line);if(!sep_line) cout<<"}\n";cout<<endl;}
template <typename T>void print(const T &v, bool show_index = false){int w = 2;if(show_index){for(int i=0; i<sz(v); i++)cout<<setw(w)<<i<<" ";cout<<endl;}for(auto &el: v) cout<<setw(w)<<el<<" ";cout<<endl;}
template <typename T>void print_vv(const T &vv){if(sz(vv)==0) {cout<<"Empty"<<endl; return;} int w = 3;cout<<setw(w)<<" ";for(int j=0; j<sz(*vv.begin()); j++)cout<<setw(w)<<j<<" ";cout<<endl;int i = 0;for(auto &v: vv){cout<<i++<<" {";for(auto &el: v) cout<<setw(w)<<el<<" ";cout<<"},\n";}cout<<endl;}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, X, M;
    while(cin>>n>>X>>M){
        --n;
        vl dp(M);
        dp[0] = X;
        fore(i,1,M){
            dp[i] = (dp[i-1]*dp[i-1])%M;
        }
        // print(dp);
        if(n<M){
            ll sum = 0;
            forn(i,n+1) sum+=dp[i];
            cout<<sum<<"\n"; continue;
        }

        set<ll> seen;
        int stval = -1;
        for(auto x: dp){
            if(!seen.count(x)){
                seen.insert(x);
            }else{
                stval = x; break;
            }
        }
        
        int st = 0, ed = 0;
        if(stval!=-1){
            while(dp[st]!=stval) ++st;
            ed = st;
            while(dp[ed+1]!=dp[st]) ++ed;
        }else st = M, ed = M;

        ll sum = 0;
        forn(i,st) sum+=dp[i];
        n-=(st-1);
        int clen = (ed-st+1);
        ll cycsum = 0;
        for(int i=st; i<=ed; ++i) cycsum+=dp[i];
        
        sum+=(cycsum)*(n/clen);
        int rem = n%clen;
        forn(i,rem) sum+=dp[st+i];
        cout<<sum<<"\n";


    }
    return 0;
}