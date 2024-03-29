#include <bits/stdc++.h>
#define chmin(a, b) ((a)=min((a), (b)))
#define chmax(a, b) ((a)=max((a), (b)))
#define fs first
#define sc second
#define eb emplace_back
using namespace std;

typedef long long ll;
typedef pair<int, int> P;
typedef tuple<int, int, int> T;

const ll MOD=1e9+7;
const ll INF=1e18;

int dx[]={1, -1, 0, 0};
int dy[]={0, 0, 1, -1};

int main(){
    int n, k;
    while(cin>>n>>k, n){
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];

        vector<ll> sum(n+10, 0);
        for(int i=1; i<=n; i++) sum[i]=sum[i-1]+a[i-1];

        ll ans=-INF;
        for(int i=1; i+k-1<=n; i++){
            chmax(ans, sum[i+k-1]-sum[i-1]);
        }
        cout << ans << endl;
    }
}
