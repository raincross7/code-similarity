#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(x)(x).begin(), (x).end() // 昇順ソート
#define rall(v)(v).rbegin(), (v).rend() // 降順ソート
#define INF 1LL << 60
typedef long long int LL;
typedef long long int ll;
#define pll pair < ll, ll >
#define F first
#define S second
const int MOD = 1000000007;
template < class T > bool chmax(T & a,const T & b) { if (a < b) { a = b; return true; } return false; }
template < class T > bool chmin(T & a,const T & b) { if (a > b) { a = b; return true; } return false; }
// 任意のlogは　対数の底の変換を使う    log(N) / log(任意の底)

template< typename T >
struct BIT {
  vector< T > data;

  BIT(int sz) {
    data.assign(++sz, 0);
  }

  T sum(int k) {
    T ret = 0;
    for(++k; k > 0; k -= k & -k) ret += data[k];
    return (ret);
  }

  void add(int k, T x) {
    for(++k; k < data.size(); k += k & -k) data[k] += x;
  }
};



int main() {
    int N,D,A;cin >> N >> D >> A;
    vector<pll> XH(N);
    rep(i,N)cin >> XH[i].F >> XH[i].S;
    sort(all(XH));
    vector<LL> X(N+1);
    vector<LL> H(N+1);
    rep(i,N){
        X[i+1] = XH[i].F;
        H[i+1] = XH[i].S;
    }
    vector<int> bom(N+1);
    BIT<LL> q(N+1);
    // q.add(a,w);
    // q.add(b+1,-w);

    rep(i,N){
        int lb = 0; int ub = N+1;
        while(ub - lb > 1){
            int mid = (ub+lb)/2;
            if(X[i+1] + 2*D >= X[N]){
                lb = N;
                break;
            }
            if(X[i+1] + 2*D < X[mid])ub = mid;    // lb,ubは適宜変更
            else lb = mid;
        }
        bom[i+1] = lb; // lb まで被爆
    }

    LL ans = 0;

    for(int i = 1;i <= N;++i){
        if(H[i] + q.sum(i) <= 0)continue;
        LL tmp = 0;
        int num = 0;
        num = (H[i] + q.sum(i) +A-1)/A;
        ans += num;
        tmp = num * A;
        q.add(i,-tmp);
        q.add(bom[i]+1,tmp);
    }

    cout << ans << endl;



}