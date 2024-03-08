#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<cmath>
#include<complex>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<set>
#include<bitset>
#include<functional>
#include<numeric>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using namespace std;
#define REP(i,m,n) for(int i=(int)(m) ; i < (int) (n) ; ++i )
#define rep(i,n) REP(i,0,n)
using ll = long long;
const int inf=1e9+7;
const ll longinf=1LL<<60 ;
const ll mod=1e9+7 ;
int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

int main()
{

    ll N,K;
    cin >> N >> K;
    ll mid = N/K;
    int ue = N%K;
    ll ans = 0;
    ans += (mid*mid*mid);
    if(K%2==1)
    {
        cout << ans << endl;
    }
    else
    {
        // if((N%K)>=K/2) ue = mid;
        // else ue = mid-1;
        // ans += (ue+mid)*(ue+mid)*(ue+mid);
        K /= 2;
        ll half = N/(K) - mid;
        ans += (half*half*half);
        cout << ans << endl;
    }

    return 0;
}