#include <bits/stdc++.h>
/*
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <utility>
#include <cmath>
#include <tuple>
#include <queue>
#include <bitset>
#include <set>
#include <map>
#include <list>
*/

using ll = long long;
using ld = long double;
using namespace std;
const int INF = 1e9+100;
const ll INF64 = 7e18l;
const int mod = 1000000007;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define ALL(a) (a).begin(), (a).end()
#define FIN ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    FIN;
    ll n;  cin >> n;
    map<string,ll> ana;
    ll ans = 0;

    for(int i=0;i<n;i++){
        string s; cin >> s;
        sort(ALL(s));
        ana[s]++;
    }

    for(auto itr=ana.begin();itr!=ana.end();itr++){
        ans += itr->second * (itr->second -1) /2;
    }
    cout << ans << endl;

    return 0;
}
