/*Read the problem carefully before starting to work on it*/
#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
//using namespace __gnu_pbds;

typedef long long ll;

#define pb push_back
#define eb emplace_back
#define mp(x,y) make_pair(x,y)
#define mod 1000000007

double PI = 3.1415926535897932384626;

template<typename T> T power(T x, T y, ll m = mod) {T ans = 1; while (y > 0) {if (y & 1LL) ans = (ans * x) % m; y >>= 1LL; x = (x * x) % m;} return ans % m;}

//typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ost;

//mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
//#define rnd(x, y) uniform_int_distribution<ll>(x, y)(rng)

//struct custom_hash {
//    static uint64_t splitmix64(uint64_t x) {
//        // http://xorshift.di.unimi.it/splitmix64.c
//        x += 0x9e3779b97f4a7c15;
//        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//        return x ^ (x >> 31);
//    }
//    size_t operator()(uint64_t x) const {
//        static const uint64_t FIXED_RANDOM =
//            chrono::steady_clock::now().time_since_epoch().count();
//        return splitmix64(x + FIXED_RANDOM);
//    }
//};

#define fi first
#define se second

ll val[1000006];

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n, k;
	cin >> n >> k;
	ll ans = 0;
	for (ll gg = k; gg >= 1; gg--)
	{
		ll boi = power(k / gg, n);
		for (ll gg1 = 2 * gg; gg1 <= k ; gg1 += gg)
		{
			ll boi1 = val[gg1];
			if (boi1 == 0)
				break;
			boi = (boi - boi1 + mod) % mod;
		}
		val[gg] = boi;
		ll weary = (gg % mod * boi % mod) % mod;
		ans += weary;
		ans %= mod;
	}
	cout << ans;
	return 0;
}


//252908XL

/*
comments:-

*/
