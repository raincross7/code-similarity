#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

#define rep(i, o) for (ll i = 0; i < (o);i++)
#define rep_s(i, o) for (int i = 1; i <= (o);i++)
#define REP(i,a,b)for(int i=(int)(a);(i)<(int)(b);i++)
#define NUM 1e5

typedef long long ll;
typedef unsigned long long ull;

ll gcd(ll a, ll b) { return b ? gcd(b, a%b) : a; }
ll lcm(ll c, ll d) { return c / gcd(c, d) * d; }


template<class T>
bool chmax(T &a, const T &b) { if (a < b) { return b; } return a; }

template<class T>
bool chmin(T &a, const T &b) { if (a > b) { a = b; return a; } return a; }

int main() {
    ll n, x; 
    cin >> n >> x;

    vector<ll> coord(n+1);
    rep(i, n) cin >> coord[i];
    coord[n] = x;

    sort(coord.begin(), coord.end());
    // rep(i, n+1) cout << coord[i] << endl;
    ll d = 0; 
    vector<ll> dist(n);
    rep(i, n) {
        d = abs(coord[i+1]-coord[i]);
        dist[i] = d;
    }
    
    ll ans = dist[0];
    rep(i, n-1) ans = gcd(dist[i+1],ans);
    // rep(i, n) cout << dist[i] << endl;
    cout << ans << endl;
    return 0;
}