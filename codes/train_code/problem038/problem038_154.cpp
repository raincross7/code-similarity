#pragma region
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <list>
#include <iomanip>
#include <cstdint>
#include <cstdlib>

using namespace std;
typedef long long ll;
//#define rep(i, s, e) for (int(i) = (s); (i) < (e); ++(i))
#define rep(i, e) for (int(i) = 0; (i) < (e); ++(i))
#define rrep(i, s) for (int(i) = (s) - 1; (i) >= 0; --(i))
#define all(x) x.begin(),x.end()
#pragma endregion


int main()
{
	string s; cin >> s;
	ll n = s.size();
	vector<ll> v(26, 0);
	rep(i, n)++v[s[i] - 'a'];
	ll res = n * (n - 1) / 2 + 1;
	for (ll x : v)
	{
		if (x == 0)continue;
		res -= x * (x - 1) / 2;
	}
	cout << res << endl;
}