#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define VREP(it, v) for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
typedef pair<ll,ll> pi;
typedef vector<ll> vi;

template <typename T>
using pbds_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <typename K, typename V>
using pbds_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
ll n;
ll ans = 0;
ll a, b;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n;
	ans = n*n*n - n;
	ans /= 6;
	ans += (n*(n + 1))/2;
	REP(i, 0, n - 1){
		cin >> a >> b;
		if (b < a) swap(a, b);
		ans -= a*(n + 1 - b);
	}
	cout << ans << endl;
}