/*
    Author:zeke
    
    pass System Test!
    GET AC!!
*/
#include <iostream>
#include <queue>
#include <vector>
#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <functional>
#include <cmath>
#include <queue>
#include <set>
#include <stack>
#include <deque>
#include <map>
#include <iomanip>
#include <utility>
#include <stack>
#include <bitset>
using ll = long long;
using ld = long double;
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define rep3(var, min, max) for (ll(var) = (min); (var) < (max); ++(var))
#define repi3(var, min, max) for (ll(var) = (max)-1; (var) + 1 > (min); --(var))
#define Mp(a, b) make_pair((a), (b))
#define F first
#define S second
#define Icin(s) \
    ll(s);      \
    cin >> (s);
#define Scin(s) \
    ll(s);      \
    cin >> (s);
template <class T>
bool chmax(T &a, const T &b)
{
    if (a < b)
    {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
bool chmin(T &a, const T &b)
{
    if (b < a)
    {
        a = b;
        return 1;
    }
    return 0;
}
typedef pair<ll, ll> P;
typedef vector<ll> V;
typedef vector<V> VV;
typedef vector<P> VP;
ll mod = 1e9 + 7;
ll MOD = 1e9 + 7;
ll INF = 1e18;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll n,m;
    cin >> n >> m;
    VV gragh(n,V(n,INF));
    VV reg(m, V(3));
    rep(i,n){
        gragh[i][i] = 0;
    }
    rep(i,m){
        ll a,b,c;
        cin >> a >> b >> c;
        a--;
        b--;
        gragh[a][b] = c;
        gragh[b][a] = c;
        reg[i][0] = a;
        reg[i][1] = b;
        reg[i][2] = c;
    }
    

    rep(k,n){
        rep(i,n){
            rep(j,n){
                chmin(gragh[i][j],gragh[i][k]+gragh[k][j]);
            }
        }
    }
    
    ll cnt = 0;
    rep(i,m){
        if(gragh[reg[i][0]][reg[i][1]]<reg[i][2]){
            cnt++;
        }
    }
    cout << cnt << endl;
}
