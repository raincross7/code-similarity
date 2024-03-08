#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
mt19937 rng(high_resolution_clock::now().time_since_epoch().count());
mt19937_64 rngll(high_resolution_clock::now().time_since_epoch().count());
template<typename T> T ctmax(T &x, const T &y){ return x = max(x, y); }
template<typename T> T ctmin(T &x, const T &y){ return x = min(x, y); }
template<typename T> using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;



int main(){
	cin.tie(0)->sync_with_stdio(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; ++ i){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int i = lower_bound(a.begin(), a.end(), a.back() / 2) - a.begin();
	if(i && a[i] - a.back() / 2 >= (a.back() + 1) / 2 - a[i - 1]){
		-- i;
	}
	cout << a.back() << " " << a[i] << "\n";
	return 0;
}

/*

*/

////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//                                   Coded by Aeren                                   //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////