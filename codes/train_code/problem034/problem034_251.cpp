#include <iostream> // cout, endl, cin
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
#include <math.h>
#include <cstdlib>
#define rep(i,n) for(int i = 0;i<(n);i++);
#define all(a) (a).begin(),(a).end()
using namespace std;
using ld = long double;
using ll = long long;
const ll INF = 100100100100100;

ll gcd(ll a, ll b) {//a>b
	if (a < b) swap(a, b);
	if (a % b == 0) return b;
	else return gcd(a % b, b);
}
ll lcm(ll c, ll d) {
	ll b = gcd(c, d);
	return c / b * d;
}
int main() {
	ll N;
	cin >> N;
	ll T = 0;
	ll ans = 1;
	for (int i = 0; i < N; i++) {
		cin >> T;
		ans = lcm(ans, T);
	}
	cout << ans << endl;
}