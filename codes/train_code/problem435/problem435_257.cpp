#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <bitset>
#include <algorithm>
#include <complex>
#include <array>
#include <iomanip>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<long double> VD;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<VD> VVD;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

template<typename T> void chmin(T &a, T b) { if (a > b) a = b; }
template<typename T> void chmax(T &a, T b) { if (a < b) a = b; }

int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }
#define INF 1LL<<60

int main() {
    int N;
    cin >> N;
    vector<int> a(N+1);
    REP(i, N) cin >> a[i+1];

    // 1から始まる最大単調増加列を求める
    vector<int> dp(N + 1, 0); // dp[i]: i番目まで見たときの最後の要素
    FOR(i, 1, N)
        if(dp[i-1] + 1 == a[i])
            dp[i] = a[i];
        else
        {
            dp[i] = dp[i-1];
        }
    if(dp[N] == 0) {
        cout << -1 << endl;
    } else {
        cout << N - dp[N] << endl;
    }
    return 0;
}