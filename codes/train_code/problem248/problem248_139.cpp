#include <iostream>
#include <numeric>
#include <cmath>
#include <queue>
#include <limits>
#include <stdio.h>
#include <iomanip>
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
using namespace std;
using ll = long long;
#define rep(i, n) for (long long i = 0; i < (long long)(n); i++)
ll Max(ll(a), ll(b), ll(c)) {
	return max(max(a, b), c);
}
ll Min(ll(a), ll(b), ll(c)) {
	return min(min(a, b), c);
}


int main() {
	ll N;
	string an = "Yes";
	cin >> N;
	vector<ll> t(N + 1);
	vector<ll> x(N + 1);
	vector<ll> y(N + 1);
	t[0] = 0; x[0] = 0, y[0] = 0;
	rep(i, N) {
		cin >> t[i + 1] >> x[i + 1] >> y[i + 1];
		if (abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]) > (t[i + 1] - t[i]))an = "No";
		else if (((t[i + 1] - t[i]) - (abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]))) % 2 != 0) {
			an = "No";
		}
	}
	cout << an << endl;
}