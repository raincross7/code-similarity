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
#include<cmath>
#include<limits>
#define ll long long
#define ALL(x) (x).begin(),(x).end()
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define int_INF 2147483647
#define pint_INF 2000000000
#define ll_INF 	9223372036854775807
#define MOD 1000000007
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvll vector<vector<long long>>
#define vvc vector<vector<char>>
#define vll vector<long long>
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define sysp system("PAUSE")
#define pno cout << "no" << endl
#define pyes cout << "yes" << endl
#define pYes cout << "Yes" << endl
#define pNo cout << "No" << endl
using namespace std;

int main() {
	int N; cin >> N;
	vi c(N - 1), s(N - 1), f(N - 1);
	rep(i, N - 1) {
		cin >> c[i] >> s[i] >> f[i];
	}

	vector<ll> ans(N); // ans[0] means minimum time required to reach the station N-1
	//binary search
	ans[N - 1] = 0;
	for (int i = N - 2; i >= 0; i--) {
		int cur = i;
		ll now = 0;
		now = s[i];
		now += c[i];
		cur++;
		while (cur < N - 1) {
			if (now <= s[cur]) {
				now = ans[cur];
				break;
			}
			else {
				//find T s.t. T%f[cur] and T >= S[cur]
				now = ((now + f[cur] - 1) / f[cur]) * f[cur];
				now += c[cur];
				cur++;
			}
		}
		ans[i] = now;
	}

	for (auto a : ans) {
		cout << a << endl;
	}
}
