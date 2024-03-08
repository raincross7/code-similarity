#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1001001001;
const ll mod = 1000000007;

int main(){
    ll n; cin >> n;
    set<ll> st;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            st.insert(i);
            st.insert(n / i);
        }
    }
    ll ans = 0;
    for(ll k : st){
        if(n / k >= k - 1) continue;
        if(!st.count(k - 1)){
            ans += k - 1;
        }
    }
    cout << ans << endl;
}