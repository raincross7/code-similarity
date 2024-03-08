/*
これを入れて実行
g++ code.cpp
./a.out
 */
 
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <cstring>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <utility>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
#include <math.h>
#include <tuple>
#include <iomanip>
#include <bitset>
#include <functional>
#include <cassert>

#define all(x) (x).begin(),(x).end()
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
int dy4[4] = {-1, 0, +1, 0};
int dx4[4] = {0, +1, 0, -1};
int dy8[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dx8[8] = {0, 1, 1, 1, 0, -1, -1, -1};
 
const long long INF = 1LL << 60;
const ll MOD = 1e9 + 7;
 
bool greaterSecond(const pair<int, int>& f, const pair<int, int>& s){
    return f.second > s.second;
}
 
ll gcd(ll a, ll b){
	if (b == 0)return a;
	return gcd(b, a % b);
}
 
ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}

ll conbinationMemo[100][100];

void cmemoInit(){
    rep(i, 100){
        rep(j, 100){
            conbinationMemo[i][j] = -1;
        }
    }
}
 
ll nCr(ll n, ll r){
    if(conbinationMemo[n][r] != -1) return conbinationMemo[n][r];
    if(r == 0 || r == n){
        return 1;
    } else if(r == 1){
        return n;
    }
    return conbinationMemo[n][r] = (nCr(n - 1, r) + nCr(n - 1, r - 1));
}
 
ll nPr(ll n, ll r){
    r = n - r;
    ll ret = 1;
    for (ll i = n; i >= r + 1; i--) ret *= i;
    return ret;
}
//-----------------------ここから-----------
ll n, m, v, p;
bool check(ll mid, vector<ll> a){

    //cout << mid << endl;
    ll tmp = a[mid] + m;
    if(n - mid <= v){
        ll vote = 0;
        vote += (n - mid) * m;
        vote += (p - 1) * m;
        for(ll i = p - 1; i < mid; i++){
            if(a[i] > tmp) return false;
            vote += min(m, tmp - a[i]);
        }
        if(vote >= m * v){
            return true;
        } else {
            return false;
        }
    } else {
        a[mid] += m;
        for(ll i = n - v + 1; i < n; i++){
            a[i] += m;
        }
    }




    sort(all(a), greater<ll>());

    ll last = a[p - 1];

    //cout << mid << ":" << tmp << " " << last << endl;

    if(tmp >= last){
        return true;
    } else {
        return false;
    }
}
int main(void){

    cin >> n >> m >> v >> p;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    sort(all(a), greater<ll>());
    // rep(i, n){
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    ll ok = 0;
    ll ng = n;

    while(abs(ok - ng) > 1){
        ll mid = (ok + ng) / 2;
        if(check(mid, a)){
            ok = mid;
        } else {
            ng = mid;
        }
    }

    cout << ok + 1 << endl;


}
