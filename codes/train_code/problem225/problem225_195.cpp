#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end())
#define VRSORT(v) sort(v.rbegin(), v.rend())//vectorの降順ソート
#define ll long long
#define pb(a) push_back(a)
#define INF 1000000000
#define MOD 1000000007
using namespace std;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

typedef vector<unsigned int>vec;
typedef vector<vec> mat;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }


int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;cin>>n;
    vector<ll> a(n);
    REP(i,n) cin>>a[i];
    ll ans=0;
    while(true){
        bool f=true;
        REP(i,n) if(a[i]>=n) f=false;
        if(f) break;

        ll cnt=0;
        REP(i,n){
            cnt += max(0LL,a[i])/n;
        }
        REP(i,n){
            ll d = max(0LL,a[i])/n;
            a[i] = a[i] - d*n + (cnt-d);
        }
        ans+=cnt;
    }
    cout<<ans<<endl;
}
