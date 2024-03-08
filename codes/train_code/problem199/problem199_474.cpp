#include <bits/stdc++.h>
using namespace std;
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
const long long INF = 1LL << 60;
typedef pair<int, int> P;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    priority_queue<int> que;
    rep(i, N) que.push(A[i]);

    rep(i, M) {
        int value = que.top(); que.pop();
        value /= 2;
        que.push(value);
    }

    ll ans = 0;
    rep(i, N) {
        ans += que.top(); que.pop();
    }

    cout << ans << endl;
    return 0;
}