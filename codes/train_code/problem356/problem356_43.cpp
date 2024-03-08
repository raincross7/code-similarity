#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<long long> VL;
typedef vector<vector<long long>> VVL;
typedef pair<int,int> P;
typedef tuple<int,int,int> tpl;

#define ALL(a)  (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define REVERSE(c) reverse((c).begin(),(c).end())
#define EXIST(m,v) (m).find((v)) != (m).end()
#define LB(a,x) lower_bound((a).begin(), (a).end(), x) - (a).begin()
#define UB(a,x) upper_bound((a).begin(), (a).end(), x) - (a).begin()

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)
#define RFOR(i,a,b) for(int i=(a)-1;i>=(b);--i)
#define RREP(i,n) RFOR(i,n,0)

#define en "\n"

constexpr double EPS = 1e-9;
constexpr double PI  = 3.1415926535897932;
constexpr int INF = 2147483647;
constexpr long long LINF = 1LL<<60;
constexpr long long MOD = 1000000007; // 998244353;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

void Main(){
    int N; cin >> N;
    VI m(300000,0);
    REP(_,N){
        int a; cin >> a; a--;
        m[a]++;
    }
    VI C;
    for(int i : m){
        if(i>0) C.push_back(i);
    }
    SORT(C);
    int K = C.size();

    VI D(C[K-1]);
    for(int i : C){
        REP(j,i) D[j]++;
    }
    REVERSE(D);

    VL SC(K+1,0), SD(C[K-1]+1,0);
    REP(i,K) SC[i+1] = SC[i] + C[i];
    REP(i,C[K-1]) SD[i+1] = SD[i] + D[i]; REVERSE(SD);

    int maxA = C[K-1];
    for(ll i=1; i<N+1; i++){
        while(i*maxA > SC[K]-SD[maxA]) maxA--;
        int ans = (SC[K]-SD[maxA]) / i;
        cout << ans << en;
    }
    return;
}

int main(void){
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);cout<<fixed<<setprecision(15);
    int t=1; //cin>>t;
    REP(_,t) Main();
    return 0;
}