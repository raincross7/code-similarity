#include <bits/stdc++.h>
using namespace std;
#define reps(i,s,n) for(int i = s; i < n; i++)
#define rep(i,n) reps(i,0,n)
#define Rreps(i,n,e) for(int i = n - 1; i >= e; --i)
#define Rrep(i,n) Rreps(i,n,0)
#define ALL(a) a.begin(), a.end()
#define fi first
#define se second
typedef long long ll;
typedef vector<ll> vec;
typedef vector<vec> mat;

ll N,M,H,W,Q,K,A,B;
string S;
//const ll MOD = 998244353;
const ll MOD = (1e+9) + 7;
typedef pair<ll, ll> P;
const ll INF = (1LL<<58);

int main() {
    queue<ll> que;
    rep(i,9) que.push(i + 1);
    cin>>K;
    while(--K){
        ll a = que.front();
        que.pop();
        int b = a % 10;
        a *= 10;
        reps(i, max(0, b - 1), min(10, b + 2)){
            que.push(a + i);
        }
    }
    N = que.front();
    cout<<N<<endl;
}