
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;
const int maxn = 2000100;



int main(){
        _
        int n,m; cin >> n >> m;

        int a = n, b = m;
        vi x1(n),y1(n);
        vi x2(m),y2(m);
        for(int i = 0; i<n; i++){
            cin >> x1[i] >> y1[i];
        }
        for(int i = 0; i<m; i++){
            cin >> x2[i] >> y2[i];
        }
        for(int i = 0; i<n; i++){
            ll  mn = 1000000000000;
            int pos;
            for(int j = 0; j<m; j++){
                ll ans = abs(x1[i]-x2[j])+abs(y1[i]-y2[j]);
                if(ans<mn){
                    mn = ans;
                    pos = j+1;
                }
            }
            cout<<pos<<endl;
        }


return 0;
}

