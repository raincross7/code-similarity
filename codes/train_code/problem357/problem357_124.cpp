#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
#include <string>
#include <math.h>
#include <limits.h>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <bitset>
#include <cassert>
#include <random>
#include <functional>
#include <stack>
#include <iomanip>
#include <cassert>
//#include <boost/multiprecision/cpp_int.hpp>
#include <complex>
#include <cstdio>
#include <list>

using namespace std;
//std::ios::sync_with_stdio(false);
//std::cin.tie(0);
const long long MOD = 1e9 + 7;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<ld, ll> pdl;
typedef pair<ld, ld> pdd;
typedef vector<ll> VLL;
typedef vector<VLL> VVLL;
//typedef boost::multiprecision::cpp_int bigint;

//何が、何回で残るか
pll calc(ll x, ll n) {
	if (n == 0)return pll(0, 0);
	if (n == 1)return pll(x,0);
	pll res = calc(x, n / 2);
	ll ans = 2 * res.second;
	deque<ll> deq;
	deq.push_back(res.first);
	if (n & 1)deq.push_back(x);
	deq.push_back(res.first);
	while (deq.size() >= 2) {
		ll next = deq.front();
		deq.pop_front();
		next += deq.front();
		deq.pop_front();
		ans++;
		if (next <= 9)deq.push_front(next);
		else {
			deq.push_front(next % 10);
			deq.push_front(next/10);
		}
	}
	return pll(deq.front(),ans);
}

pll calc(pll a, pll b) {
	deque<ll> deq;
	ll ans = 0;
	a = calc(a.first,a.second);
	deq.push_back(a.first);
	ans += a.second;
	b = calc(b.first, b.second);
	deq.push_back(b.first);
	ans += b.second;
	while (deq.size() > 1) {
		ll next = deq.front();
		deq.pop_front();
		next += deq.front();
		deq.pop_front();
		ans++;
		if (next <= 9)deq.push_front(next);
		else {
			deq.push_front(next % 10);
			deq.push_front(next / 10);
		}
	}
	return pll(deq.front(), ans);
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	ll M;
	cin >> M;
	deque<pll> deq;
	for (ll m = 0; m < M; m++) {
		ll d, c;
		cin >> d >> c;
		deq.push_back(pll(d, c));
	}
	ll ans = 0;
	while (deq.size() > 1) {
		pll res = calc(deq.front(), deq[1]);
		deq.pop_front();
		deq.pop_front();
		ans += res.second;
		deq.push_front(pll(res.first, 1));
	}
	if (deq.front().second > 1) {
		pll res = calc(deq.front().first, deq.front().second);
		ans += res.second;
	}
	cout << ans << "\n";
	return 0;
}
