#include <bits/stdc++.h>   
#define rep(i, n) for(long long int i = 0; i < n; i++)
#define _rep(i, m, n) for(long long int i = m; i < n; i++)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const ll mod = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
     
ll gcd(ll A, ll B){
    if(B == 0)return A;
    return gcd(B, A % B);
}
ll lcm(ll A, ll B){
    return A * B / gcd(A, B);
}
using Graph = vector<vector<int>>;
Graph G;


int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n; cin >> n;
    vector<ll> div;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            div.push_back(i);
            if(i * i != n) div.push_back(n / i);
        }
    }

    ll ans = 0;
    for(auto it : div){
        if(it == 1) continue;
        if(n % (it - 1) == n / (it - 1)) ans += (it - 1);
    }
    cout << ans << endl;
}