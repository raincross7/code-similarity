#include <iostream>
#include <fstream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <stack>
#include <functional>
#include <algorithm>
#include <climits>
#include <cmath>
#include <iomanip>
using namespace std;
#define ll long long int
#define rep(i,n) for( int i = 0; i < n; i++ )
#define rrep(i,n) for( int i = n; i >= 0; i-- )
#define REP(i,s,t) for( int i = s; i <= t; i++ )
#define RREP(i,s,t) for( int i = s; i >= t; i-- )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000


int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N; cin >> N;
    int p[20010];
    rep(i, N) cin >> p[i];
    int a[20010], b[20010];
    rep(i, N) a[i] = i * 45000 + 40000;
    rep(i, N) b[i] = (N - i - 1) * 45000 + 40000;
    rep(i, N) {
        a[p[i] - 1] += i;
        b[p[i] - 1] += i;
    }
    rep(i, N) {
        if(i != 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
    rep(i, N) {
        if(i != 0) cout << " ";
        cout << b[i];
    }
    cout << endl;

    return 0;
}