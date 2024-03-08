#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include "atcoder/dsu.hpp"

#define F first
#define S second
#define int long long
#define ll long long
//#define int  unsigned long long
#define pb push_back
//#define double long double

using namespace std;
using namespace atcoder;
using namespace __gnu_pbds;
typedef  tree< int , null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int N = 3000000;
const int K = 100000;
const int mod = 1e9 + 7;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, q;
    cin >> n >> q;
    dsu d(n);
    while(q--){
        int t, u, v;
        cin >> t >> u >> v;
        if (t == 0){
            d.merge(u,v);
        } else{
            cout << d.same(u, v) << endl;
        }
    }
}
