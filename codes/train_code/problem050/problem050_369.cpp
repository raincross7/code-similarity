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
    int y, m, d;
    scanf("%d/%d/%d", &y, &m, &d);

    ll st = 20190430;
    ll in = y * 10000 + m * 100 + d;

    if (st < in) cout << "TBD" << endl;
    else cout << "Heisei" << endl;
    return 0;
}