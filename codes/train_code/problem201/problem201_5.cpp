#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#define all(x) (x).begin(),(x).end()
#define rep(i,n) for(int (i)=0;i<(n);i++)
#define REP(i,m,n) for(int (i)=(m);(i)<(n);(i)++)
#define INF INT_MAX
#define MOD 1000000007
#define fcout cout << fixed << setprecision(15)
#define int long long
#define yorn(f) puts((f)?"Yes":"No")
#define YORN(f) puts((f)?"YES":"NO")
#define sec second
#define fir first
typedef long long ll;
typedef pair<int, int> P;
typedef priority_queue<int> pque;
typedef vector<int> Vec;
int gcd(int a,int b){return b?gcd(b,a%b):a;};
int lcm(int a,int b){return a/gcd(a,b)*b;};
int mod(int a,int b){return (a+b-1)/b;};
template<typename A, size_t N, typename T>
void Fill(A(&array)[N],const T &val){std::fill((T*)array,(T*)(array+N),val);}
template<class T>inline bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;};
template<class T>inline bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;};



signed main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector< vector<int> > v(n, vector<int>(3));
    rep(i, n) {
        cin >> v[i][1] >> v[i][2];
        v[i][0] = v[i][1] + v[i][2];
    }
    sort(all(v));
    reverse(all(v));
    int ans = 0;
    rep(i, n) {
        if(i % 2 == 0) ans += v[i][1];
        else ans -= v[i][2];
    }
    cout << ans << endl;
    return 0;
}