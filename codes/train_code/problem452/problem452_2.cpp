#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;
const ll INF = 1LL<<60;
const ll MOD = 1e9 + 7;


int main() {
    ll N,K;
    cin >> N >> K;
    vector<ll> vec;
    map<ll,ll> mp;
    for (ll i = 0;i<N;i++) {
        ll a,b;
        cin >> a >> b;
        mp[a] += b;
    }
    ll cnt=0;
    for (pair<ll,ll> p : mp) {
        cnt += p.second;
        if (cnt >= K) {
            cout << p.first << endl;
            break;
        }
    }


}