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
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
long long MOD = 1e9 + 7;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef boost::multiprecision::cpp_int bigint;

ll N, M;
vector<ll> used = { 0,2,5,5,4,5,6,3,7,6 };
vector<bigint> DP;
vector<ll> nums;

int main() {
	cin >> N >> M;
	nums.resize(M);
	for (ll m = 0; m < M; m++)cin >> nums[m];
	DP.resize(N + 1, -1);
	DP[0] = 0;
	for (ll n = 1; n <= N; n++) {
		for (ll m = 0; m < M; m++) {
			if (n < used[nums[m]])continue;
			if(DP[n] < 10 * DP[n - used[nums[m]]] + nums[m]){
            	DP[n] = 10 * DP[n - used[nums[m]]] + nums[m];
			}
		}
	}
	cout << DP[N] << endl;
	return 0;
}