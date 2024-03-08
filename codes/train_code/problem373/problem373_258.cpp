#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>

using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll,ll> P;
typedef vector<P> vpl;
#define rep(i,n) for(ll i=0; i<(n); i++)
#define REP(i,a,b) for(ll i=(a); i<(b); i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
const int inf = 1<<30;
const ll linf = 1LL<<62;
const int mod = 1e9 + 7;
const int MAX = 510000;
const int V = 100005;

int main(){
    ll n,k; cin >> n >> k;
    priority_queue<P> pq;
    rep(i,n){
        ll t,d; cin >> t >> d;
        t--;
        pq.emplace(P(d,t));
    }
    vl sushi(n,0);
    ll sum = 0;
    ll x = 0;
    multiset<ll> mse;
    rep(i,k){
        auto p = pq.top(); pq.pop();
        sum += p.first;
        ll u = p.second;
        if(sushi[u]==0){
            sushi[u]++;
            x++;
        }
        else mse.insert(p.first);
    }
    ll ans = sum + x*x;
    while(x<k && !mse.empty() && !pq.empty()){
        auto p = pq.top(); pq.pop();
        ll u = p.second;
        if(sushi[u]>0) continue;
        sushi[u]++;
        sum -= *mse.begin();
        mse.erase(mse.begin());
        sum += p.first;
        x++;
        ans = max(ans, sum + x*x);
    }
    cout << ans << endl;
}