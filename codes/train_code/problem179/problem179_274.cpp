#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0;i < n;i++)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end())
#define VRSORT(v) sort(v.rbegin(), v.rend())
#define ll long long
#define pb(a) push_back(a)
#define INF 1000000000
#define LINF 1e18
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
template<class T> inline void add(T &a, T b){a = ((a+b) % MOD + MOD) % MOD;};

const int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
const double PI = acos(-1.0);
const double EPS = 1e-10;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N,K;
    cin>>N>>K;
    vector<ll> a(N),sum(N+1),p_sum(N+1);

    REP(i,N){
        cin>>a[i];
        sum[i+1] += a[i] + sum[i];
        p_sum[i+1] += p_sum[i] + (a[i]>=0 ? a[i] : 0);
    }
    ll ans = -1e18;
    for(int i=0;i+K<=N;i++){
        int left = i, right = i+K;
        ll tmp = (p_sum[left] - p_sum[0]) + max(0LL, sum[right] - sum[left]) + p_sum[N] - p_sum[right];
        chmax(ans,tmp);
    }
    cout<<ans<<endl;
}
