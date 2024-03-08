#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

#define rep(i, n) \
for(int i = 0; i <n; i++)
#define REP(i, a, b) \
for(int i = int(a); i <= int(b); i++)
#define TRvi(c, it) \
for(vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) \
for(vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) \
for(msi::iterator it = (c).begin(); it != (c).end(); it++)

#define INF 2000000000

#define MEMSET_INF 127
#define MEMSET_HALF_INF 63

void solve(){
    ll N;
    cin>>N;
    ll ans = 0;
    for(ll i=1;i<=N;++i){
        ll Y = N/i;
        ans+=(Y*(Y+1)*i)/2;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
