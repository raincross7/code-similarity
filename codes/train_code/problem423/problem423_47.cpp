#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define repr(i,n) for(ll i=(n-1);i>=0;i--)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define br cout << endl;
using namespace std;
const int INF = 1e9;
const int MOD = 1e9+7;
using Graph = vector<vector<ll>>;
template<class T> inline bool chmin(T &a, T b) { if(a > b){ a = b; return true;} return false;}
template<class T> inline bool chmax(T &a, T b) { if(a < b){ a = b; return true;} return false;}

// 0 false, 1 true 
// string to int : -48
// ceil(a)  1.2->2.0
// c++17	g++ -std=c++17 a.cpp

int main() {
    ll n, m;
    cin >> n >> m;

    if(n == 1 && m == 1){
        cout << 1 << endl;
        return 0;
    }else if(n == 1){
        cout << m-2 << endl;
        return 0;
    }else if(m == 1){
        cout << n-2 << endl;
        return 0;
    }

    cout << (n-2) * (m-2) << endl;
    return 0;


}